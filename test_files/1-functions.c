#include "main.h"

/**
 * print_b - Mimics the behavior of the %b specifier in printf
 * @output: A va_list containing the unsigned integer to be printed
 *
 * Return: The number of characters printed (excluding null byte)
 **/

int print_b(va_list output)

{
	unsigned int custom_b = va_arg(output, unsigned int);
	char *binary_str;
	unsigned int temp1 = custom_b;
	int bit_count = 0, i;

	do
	{
		temp1 >>= 1;
		bit_count++;
	}
	while (temp1 != 0);

	binary_str = (char *)malloc(bit_count + 1);
	if (binary_str == NULL)
	{
		return (-1);
	}
	for (i = bit_count - 1; i >= 0; i--)
	{
	binary_str[i] = '0' + (custom_b & 1);
	custom_b >>= 1;
	}
	binary_str[bit_count] = '\0';
	write(1, binary_str, bit_count);
	free(binary_str);

	return (bit_count);
}

/**
 * print_u - Mimics the behavior of the %u specifier in printf
 * @output: A va_list containing the unsigned integer to be printed
 *
 * Return: The number of characters printed (excluding null byte)
 **/

int print_u(va_list output)
{
	unsigned int custom_u = va_arg(output, unsigned int);
	char *u_str;

	unsigned int temp = custom_u;
	int digit_count = 0, j;
	do
	{
		temp /= 10;
		digit_count++;
	} while (temp != 0);

	u_str = (char *)malloc(digit_count + 1);
	if (u_str == NULL)
	{
		return -1;
	}

	j = digit_count - 1;
	do
	{
		u_str[j] = '0' + (custom_u % 10);
		custom_u /= 10;
		j--;
	} while (custom_u != 0);
	u_str[digit_count] = '\0';

	write(1, u_str, digit_count);
	free(u_str);

	return digit_count;
}

/**
 * print_o - Mimics the behavior of the %o specifier in printf
 * @output: A va_list containing the unsigned integer to be printed
 *
 * Return: The number of characters printed (excluding null byte)
 **/

int print_o(va_list output)

{
	unsigned int custom_o = va_arg(output, unsigned int);
	char *o_str;

	unsigned int temp = custom_o;
	int octal_count = 0, k;
	do
	{
		temp /= 8;
		octal_count++;
	} while (temp != 0);

	o_str = (char *)malloc(octal_count + 1);
	if (o_str == NULL)
	{
		return -1;
	}

	k = octal_count - 1;
	do
	{
		o_str[k] = '0' + (custom_o % 8);
		custom_o /= 8;
		k--;
	} while (custom_o != 0);
	o_str[octal_count] = '\0';

	write(1, o_str, octal_count);
	free(o_str);

	return octal_count;
}

/**
 * print_x - Mimics the behavior of the %x specifier in printf
 * @output: A va_list containing the unsigned integer to be printed
 *
 * Return: The number of characters printed (excluding null byte)
 **/

int print_x(va_list output)

{
	unsigned int custom_x = va_arg(output, unsigned int);
	char *x_str;

	unsigned int temp = custom_x;
	int hex_count = 0, a;
	do
	{
		temp /= 16;
		hex_count++;
	} while (temp != 0);

	x_str = (char *)malloc(hex_count + 1);
	if (x_str == NULL)
	{
		return -1;
	}

	a = hex_count - 1;
	do
	{
		int remainder = custom_x % 16;
		if (remainder < 10)
			x_str[a] = '0' + remainder;
		else
			x_str[a] = 'a' + (remainder - 10);
		custom_x /= 16;
		a--;
	}
	while (custom_x != 0);
	x_str[hex_count] = '\0';

	write(1, x_str, hex_count);
	free(x_str);

	return hex_count;
}

/**
 * print_X - Mimics the behavior of the %X specifier in printf
 * @output: A va_list containing the unsigned integer to be printed
 *
 * Return: The number of characters printed (excluding null byte)
 **/

int print_X(va_list output)

{
	unsigned int custom_X = va_arg(output, unsigned int);
	char *X_str;

	unsigned int temp = custom_X;
	int hex_count = 0, y, remainder;

	do
	{
		temp /= 16;
		hex_count++;
	} while (temp != 0);

	X_str = (char *)malloc(hex_count + 1);
	if (X_str == NULL)
	{
		return -1;
	}

	y = hex_count - 1;
	do
	{
		remainder = custom_X % 16;
		if (remainder < 10)
			X_str[y] = '0' + remainder;
		else
			X_str[y] = 'A' + (remainder - 10);
		custom_X /= 16;
		y--;
	} while (custom_X != 0);
	X_str[hex_count] = '\0';

	write(1, X_str, hex_count);
	free(X_str);

	return hex_count;
}
