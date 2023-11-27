#include "main.h"
#include <stdio.h>
#include <sys/stat.h>

/**
 * create_file - Creates a file with the specified content.
 * @filename: The name of the file to create.
 * @text_content: The content to write to the file.
 *
 * Return: On success, 1. On failure, -1.
 **/

int create_file(const char *filename, char *text_content)

{
	FILE *file;

	if (filename == NULL)
		return (-1);

	file = fopen(filename, "w");
	if (file == NULL)
		return (-1);
	
	if (chmod(filename, S_IRUSR | S_IWUSR) == -1)
	{
		fclose(file);
		return (-1);
	}

	if (text_content != NULL)
	{
		if (fputs(text_content, file) == EOF)
		{
			fclose(file);
			return (-1);
		}
	}
	else
	{
		if (fputs("", file) == EOF)
		{
			perror("Error writing to file");
			fclose(file);
			return (-1);
		}
	}
	fclose(file);

	return (1);
}
