#include "main.h"
#include <ctype.h>
#include <string.h>

/**
 * @brief Print the content of a buffer in a well-formatted manner.
 *
 * This function takes a buffer and its size, and prints its content
 * in a structured format. It displays the position of each byte in
 * hexadecimal, the hexadecimal content, and the ASCII representation
 * of printable characters or dots for non-printable characters.
 *
 * @param b    Pointer to the buffer.
 * @param size Size of the buffer.
 **/

void print_buffer(char *b, int size)

{
	if (size <= 0)
	{
	printf("\n");
	return;
	}

	for (int i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);

	for (int j = 0; j < 10; j++)
	{
		if (i + j < size)
		printf("%02x ", (unsigned char)b[i + j]);
		else
		printf("   ");
	}

	printf(" ");

	for (int j = 0; j < 10; j++)
	{
	if (i + j < size)
	{
	char c = b[i + j];

	if (isprint(c))

		printf("%c", c);
	else
		printf(".");

	else
		printf(" ");

	}
	printf("\n");
	}
}
