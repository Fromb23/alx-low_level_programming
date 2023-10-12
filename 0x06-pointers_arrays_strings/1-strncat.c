#include "main.h"
#include <string.h>

/**
 * _strncat - Concatenates two strings with n bytes from src.
 * @dest: The destination string.
 * @src: The source string to append to dest.
 * @n: The maximum number of bytes from src to append.
 *
 * Return: A pointer to the resulting string dest.
 **/

char *_strncat(char *dest, char *src, int n)

{

	strncat(dest, src, n);

	return (dest);
}
