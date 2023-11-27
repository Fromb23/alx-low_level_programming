#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

int main(int argc, char *argv[])

{
	FILE *file, *file_dest;
	char buffer[BUFFER_SIZE];
	size_t bytesRead;
	const char *file_from, *file_to;
	struct stat st;

	if (argc != 3)
	{
		exit (97);
	}
	file_from = argv[1];
	file = fopen(file_from, "r");
	if (file == NULL)
	{
		dprintf(2, "Error: Can't read from file NAME_OF_THE_FILE%s\n", file_from);
		exit (98);
	}
	
	file_to = argv[2];
	file_dest = fopen(file_to, "w");
	if (file_dest == NULL)
	{
		dprintf(2, "Error: Can't write to NAME_OF_THE_FILE%s\n", file_to);
		exit (99);
	}
	if (fclose(file_dest) != 0)
	{
		dprintf(2, "Error: Can't close fd FD_VALUE\n");
		fclose(file_dest);
		exit(100);
	}
	if (stat(file_to, &st) == 0)
	{
		printf("File already exists. Permissions unchanged.\n");
	}
	else
	{
		if (chmod(file_to, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH) == -1)
		{
			dprintf(2, "Error: Could not set permissions for '%s'\n", file_to);
			exit(101);
		}
		printf("Permissions set to rw-rw-r-- for '%s'\n", file_to);
	}
	while ((bytesRead = fread(buffer, 1, BUFFER_SIZE, file)) > 0)
	{
		if (fwrite(buffer, 1, bytesRead, file_dest) != bytesRead)
		{
			dprintf(2, "Error: Could not write to file '%s'\n", file_to);
			fclose(file);
			fclose(file_dest);
			exit(100);
		}
	}
	fclose(file);
	fclose(file_dest);

	return (0);
}
