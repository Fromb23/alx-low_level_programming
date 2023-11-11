#include "main.h"

/**
 * print_s - Prints a string
 * @output: A va_list containing the string to be printed
 *
 * Return: The number of characters printed(excluding null byte).
 */

int print_s(va_list output)
{
	char *str = va_arg(output, char *);

	if (str == NULL)
		return (write(1, "(nil)", 5));
	else
		return (write(1, str, strlen(str)));
}

/**
 * print_c - Prints a character
 * @output: A va_list containing the character to be printed
 *
 * Return: The number of characters printed(excluding null byte)
 */

int print_c(va_list output)
{
	char custom_c = va_arg(output, int);

	return (_myPutchar(custom_c));
}

int print_d_i(va_list output)

{
	int custom_d_i = va_arg(output, int);
	int temp = custom_d_i, converted_len;
	int int_len = 0;
	char *buffer;

	if (temp < 0)
	{
		temp = -temp;
		int_len++;
	}

	do
	{
		temp /= 10;
		int_len++;
	}
	while (temp != 0);

	buffer = (char *)malloc(int_len + 1);
	if (buffer == NULL)
		return (-1);

	converted_len = snprintf(buffer, (int_len + 1), "%d", custom_d_i);
	write(1, buffer, converted_len);
	free(buffer);
	return (converted_len);
}
