#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>

#define BUFFER_SIZE 1024

/**
 * handle_error - Print an error message, including the provided message and file path,
 * and exit with a predefined error code.
 *
 * @message: The error message.
 * @file_path: The file path associated with the error.
 **/

void handle_error(const char *message, const char *file_path)

{
	perror("Error: ");
	dprintf(2, "%s%s\n", message, file_path);
	exit(99);
}

/**
 * copy_file - Copy the contents of one file to another and set permissions.
 *
 * @file_from: The source file path.
 * @file_to: The destination file path.
 **/

void copy_file(const char *file_from, const char *file_to)

{
	FILE *file, *file_dest;
	char buffer[BUFFER_SIZE];
	size_t bytesRead;
	struct stat st;

	file = fopen(file_from, "r");
	if (file == NULL)
	        handle_error("Can't read from file ", file_from);

	file_dest = fopen(file_to, "w");

	if (file_dest == NULL)
	{
		fclose(file);
		handle_error("Can't write to ", file_to);
	}

	while ((bytesRead = fread(buffer, 1, BUFFER_SIZE, file)) > 0)
	{
		if (fwrite(buffer, 1, bytesRead, file_dest) != bytesRead)
		{
			fclose(file);
			fclose(file_dest);
			handle_error("Could not write to file '", file_to);
		}
	}

	fclose(file);

    	if (fclose(file_dest) != 0)
	{
		dprintf(2, "Error: Can't close fd FD_VALUE\n");
		exit(100);
	}

	if (stat(file_to, &st) == -1)
	{
		dprintf(2, "Error: Could not get information about %s\n", file_to);
		exit(101);
	}
	else
	{
		if (chmod(file_to, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH) == -1)
		{
			dprintf(2, "Error: Could not set permissions for '%s'\n", file_to);
			exit(102);
		}
	}
}

/**
 * main - Entry point for the file copy program.
 *
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line argument strings.
 *
 * Return: 0 on success, other values on failure.
 **/

int main(int argc, char *argv[])

{
	const char *file_from, *file_to;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = argv[1];
	file_to = argv[2];

	copy_file(file_from, file_to);

	return (0);
}
