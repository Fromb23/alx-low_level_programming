#include "main.h"
#include <string.h>

/**
* _strncpy - Copy up to n characters from src to dest
* @dest: Destination string
* @src: Source string
* @n: Maximum number of characters to copy
*
* Return: Pointer to dest
**/

char *_strncpy(char *dest, char *src, int n)

{
	strncpy(dest, src, n);
	return (dest);
}
