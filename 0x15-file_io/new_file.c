#include <fcntl.h>

int new_file(char *filename, char *text)

{
	int fd, buffer;
	ssize_t bytes_written;

	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	bytes_written = write(fd,text, strlen(text));
	if (bytes_written == -1)
		return (-1);

	if (close(fd) == -1)
		return (-1);

	return (1);
}
