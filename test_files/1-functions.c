#include "main.h"

/**
 * print_b - Mimics the behavior of the %b specifier in printf
 * @args: Handler arguments containing va_list and buffer pointer
 *
 * Return: The number of characters printed (excluding null byte)
 **/
int print_b(HandlerArgs args)
{
	unsigned int custom_b = va_arg(args.output, unsigned int);
	unsigned int temp1 = custom_b;
	int bit_count = 0, i;

	do
	{
		temp1 >>= 1;
		bit_count++;
	} while (temp1 != 0);

	if (bit_count + 1 >= BUFFER_SIZE - (args.buffer_ptr - args.buffer_start))
		return (-1);

	for (i = bit_count - 1; i >= 0; i--)
	{
		args.buffer_ptr[i] = '0' + (custom_b & 1);
		custom_b >>= 1;
	}
	args.buffer_ptr[bit_count] = '\0';
	args.buffer_ptr += bit_count;
	return (bit_count);
}

/**
 * print_u - Mimics the behavior of the %u specifier in printf
 * @args: Handler arguments containing va_list and buffer pointer
 *
 * Return: The number of characters printed (excluding null byte)
 **/
int print_u(HandlerArgs args)
{
	unsigned int custom_u = va_arg(args.output, unsigned int);
	unsigned int temp = custom_u;
	int digit_count = 0, j;

	do
	{
		temp /= 10;
		digit_count++;
	} while (temp != 0);

	if (digit_count + 1 >= BUFFER_SIZE - (args.buffer_ptr - args.buffer_start))
		return (-1);

	j = digit_count - 1;
	do
	{
		args.buffer_ptr[j] = '0' + (custom_u % 10);
		custom_u /= 10;
		j--;
	} while (custom_u != 0);
	args.buffer_ptr[digit_count] = '\0';
	args.buffer_ptr += digit_count;
	return (digit_count);
}

/**
 * print_o - Mimics the behavior of the %o specifier in printf
 * @args: Handler arguments containing va_list and buffer pointer
 *
 * Return: The number of characters printed (excluding null byte)
 **/
int print_o(HandlerArgs args)
{
	unsigned int custom_o = va_arg(args.output, unsigned int);
	unsigned int temp = custom_o;
	int octal_count = 0, k;

	do
	{
		temp /= 8;
		octal_count++;
	} while (temp != 0);

	if (octal_count + 1 >= BUFFER_SIZE - (args.buffer_ptr - args.buffer_start))
		return (-1);

	k = octal_count - 1;
	do
	{
		args.buffer_ptr[k] = '0' + (custom_o % 8);
		custom_o /= 8;
		k--;
	} while (custom_o != 0);
	args.buffer_ptr[octal_count] = '\0';
	args.buffer_ptr += octal_count;
	return (octal_count);
}

/**
 * print_x - Mimics the behavior of the %x specifier in printf
 * @args: Handler arguments containing va_list and buffer pointer
 *
 * Return: The number of characters printed (excluding null byte)
 **/
int print_x(HandlerArgs args)
{
	unsigned int custom_x = va_arg(args.output, unsigned int);
	unsigned int temp = custom_x;
	int hex_count = 0, a;

	do
	{
		temp /= 16;
		hex_count++;
	} while (temp != 0);

	if (hex_count + 1 >= BUFFER_SIZE - (args.buffer_ptr - args.buffer_start))
		return (-1);

	a = hex_count - 1;
	do
	{
		int remainder = custom_x % 16;
		if (remainder < 10)
			args.buffer_ptr[a] = '0' + remainder;
		else
			args.buffer_ptr[a] = 'a' + (remainder - 10);
		custom_x /= 16;
		a--;
	} while (custom_x != 0);
	args.buffer_ptr[hex_count] = '\0';
	args.buffer_ptr += hex_count;
	return (hex_count);
}

/**
 * print_X - Mimics the behavior of the %X specifier in printf
 * @args: Handler arguments containing va_list and buffer pointer
 *
 * Return: The number of characters printed (excluding null byte)
 **/
int print_X(HandlerArgs args)
{
	unsigned int custom_X = va_arg(args.output, unsigned int);
	unsigned int temp = custom_X;
	int heX_count = 0, y, remainder;

	do
	{
		temp /= 16;
		heX_count++;
	} while (temp != 0);

	if (heX_count + 1 >= BUFFER_SIZE - (args.buffer_ptr - args.buffer_start))
		return (-1);

	y = heX_count - 1;
	do
	{
		remainder = custom_X % 16;
		if (remainder < 10)
			args.buffer_ptr[y] = '0' + remainder;
		else
			args.buffer_ptr[y] = 'A' + (remainder - 10);
		custom_X /= 16;
		y--;
	} while (custom_X != 0);
	args.buffer_ptr[heX_count] = '\0';
	args.buffer_ptr += heX_count;
	return (heX_count);
}
