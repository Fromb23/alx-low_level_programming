#include "main.h"

/**
 * print_s - Prints a string
 * @args: Handle arguments containing va_list and buffer poiner
 *
 * Return: number of characters printed (excluding the null byte)
 */

int print_s(HandlerArgs args)

{
	char *str = va_arg(args.output, char*);
	size_t str_len, remaining_space;

	if (str == NULL)
	{
		return (write(1, "(nil)", 5));
	}
	else
	{
		str_len = strlen(str);
		remaining_space = BUFFER_SIZE - (args.buffer_ptr - args.buffer_start);

		if (str_len < remaining_space)
		{
			memcpy(args.buffer_ptr, str, str_len);
			args.buffer_ptr += str_len;
			return (str_len);
		}
		else
		{
			memcpy(args.buffer_ptr, str, remaining_space - 1);
			args.buffer_ptr += remaining_space - 1;
			return (-1); /*Buffer overflow, handle accordingly */
		}
	}
}

/**
 * print_percent - Add % character to the buffer if there's space.
 * @args: HandlerArgs structure containg output,
 * buffer pointer and buffer start.
 *
 * Return: returns %' if was successful and -1 if there's no space.
 **/

int print_percent(HandlerArgs args)

{
	if (BUFFER_SIZE - (args.buffer_ptr - args.buffer_start) >= 1)
	{
		*(args.buffer_ptr++) = '%';
		return (1);
	}

	return (-1);
}

/**
 * print_c - Prints a character
 * @args: Handler arguments containing va_list and buffer pointer
 *
 * Return: The number of characters printed (excluding null bytes)
 **/

int print_c(HandlerArgs args)

{
	if (1 <= BUFFER_SIZE - (args.buffer_ptr - args.buffer_start))
	{
		char custom_c = va_arg(args.output, int);

		*(args.buffer_ptr++) = custom_c;
		return (1);
	}

	return (-1);
}

/**
 * print_d_i - Prints a decimal (int) number
 * @args: Handler arguments containing va_list and buffer pointer
 *
 * Return: The number of characters printed (excluding null bytes)
 **/

int print_d_i(HandlerArgs args)

{
	int custom_d_i = va_arg(args.output, int);
	int temp = custom_d_i;
	int int_len = (temp < 0) ? 1 : 0;
	int required_size, converted_len;

	do
	{
		temp /= 10;
		int_len++;
	} while (temp != 0);

	required_size = snprintf(NULL, 0, "%d", custom_d_i);
	if (int_len >= BUFFER_SIZE - (args.buffer_ptr - args.buffer_start))
		return (-1);

	if (required_size >= BUFFER_SIZE - (args.buffer_ptr - args.buffer_start))
		return (-1);

	converted_len = snprintf(args.buffer_ptr, BUFFER_SIZE - (args.buffer_ptr - args.buffer_start), "%d", custom_d_i);

	if (converted_len < 0)
		return (-1);

	args.buffer_ptr += converted_len;

	return (converted_len);
}
