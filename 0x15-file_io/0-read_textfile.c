#include "main.h"

/**
 * read_textfile - Reads a text file and writes it to the standard output.
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and write.
 *
 * Return: The actual number of letters read and printed. If an error occurs,
 *         or if filename is NULL, return 0.
 **/

ssize_t read_textfile(const char *filename, size_t letters)

{
	ssize_t bytesRead;
	int openFile;
	char *buffer_l;

	if (filename == NULL)
		return (0);

	openFile = open(filename, O_RDONLY);
	if (openFile == -1)
		return (0);

	buffer_l = (char *)malloc((letters + 1) * sizeof(char));
	if (buffer_l == NULL)
	{
		close(openFile);
		return (0);
	}

	bytesRead = read(openFile, buffer_l, letters);
	if (bytesRead == -1)
	{
		close(openFile);
		free(buffer_l);
		return (0);
	}
	if (write(STDOUT_FILENO, buffer_l, bytesRead) == -1)
	{
		close(openFile);
		free(buffer_l);
		return (0);
	}
	buffer_l[bytesRead] = '\0';

	close(openFile);
	free(buffer_l);

	return (bytesRead);
}
