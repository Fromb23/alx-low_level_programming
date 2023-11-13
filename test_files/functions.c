#include "main.h"

/**
 * print_s - Prints a string
 * @args: Handler arguments containing va_list and buffer pointer
 *
 * Return: Number of characters printed (excluding null byte)
 */
int print_s(HandlerArgs args)
{
    char *str = va_arg(args.output, char *);
    size_t str_len, remaining_space;

    if (str == NULL)
    {
        return write(1, "(nil)", 5);
    }
    else
    {
        str_len = strlen(str);
        remaining_space = BUFFER_SIZE - (args.buffer_ptr - args.buffer_start);

	if (str_len < remaining_space)
        {
            memcpy(args.buffer_ptr, str, str_len);
            args.buffer_ptr += str_len;
            return str_len;
        }
        else
        {
		memcpy(args.buffer_ptr, str, remaining_space - 1);
		args.buffer_ptr += remaining_space - 1;
            return -1; /* Buffer overflow, handle accordingly */
        }
    }
}

/**
 * print_c - Prints a character
 * @args: Handler arguments containing va_list and buffer pointer
 *
 * Return: The number of characters printed (excluding null byte)
 */
int print_c(HandlerArgs args)
{
    char custom_c = (char)va_arg(args.output, int);

    if ((args.buffer_ptr - args.buffer_start) < BUFFER_SIZE)
    {
        *(args.buffer_ptr) = custom_c;
        args.buffer_ptr++;
        return 1;
    }
    else
    {
        return -1; /* Buffer overflow, handle accordingly */
    }
}

/**
 * print_d_i - Prints a decimal (int) number
 * @args: Handler arguments containing va_list and buffer pointer
 *
 * Return: The number of characters printed (excluding null byte)
 */
int print_d_i(HandlerArgs args)
{
    int custom_d_i = va_arg(args.output, int);
    int temp = custom_d_i, converted_len;
    int int_len = 0;

    /* Count the number of digits in the integer */
    if (temp < 0)
    {
        temp = -temp;
        int_len++;
    }

    do
    {
        temp /= 10;
        int_len++;
    } while (temp != 0);

    /* Check if the integer, including sign, exceeds buffer size */
    if (int_len >= BUFFER_SIZE - (args.buffer_ptr - args.buffer_start))
    {
        return -1; /* Buffer overflow, handle accordingly */
    }

    /* Convert integer to string and write to buffer */
    converted_len = snprintf(args.buffer_ptr, BUFFER_SIZE, "%d", custom_d_i);
    args.buffer_ptr += converted_len;

    return converted_len;
}

