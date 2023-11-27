#include "main.h"
#include <sys/stat.h>
#include <stdio.h>

/**
 * append_text_to_file - Appends text to a file.
 * @filename: The name of the file.
 * @text_content: The content to append to the file.
 *
 * Return: On success, 1. On failure, -1.
 **/

int append_text_to_file(const char *filename, char *text_content)

{
	FILE *file;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);

	file = fopen(filename, "a");
	if (file == NULL)
		return (-1);

	if (fputs(text_content, file) == EOF)
	{
		fclose(file);
		return (-1);
	}
	fclose(file);

	return (1);
}
