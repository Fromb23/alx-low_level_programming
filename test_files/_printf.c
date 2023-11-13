#include "main.h"

/**
 * _printf - Custom printf function
 * @format: Format string
 *
 * Return: Number of characters printed (excluding null byte)
 */
int _printf(const char *format, ...)
{

	va_list output;
	
	char buffer[BUFFER_SIZE];
	size_t buf_len = 0;
	int total_len = 0;

    	va_start(output, format);

    if (format == NULL)
        return -1;
    
    while (*format)
    {
        if (*format == '%' && *(format + 1) != '\0')
            buf_len += handle_specifier(*(++format), output, buffer, &buf_len);
        else
            buffer[buf_len++] = *format;

        if (buf_len >= BUFFER_SIZE)
        {
            total_len += buf_len;
            write(1, buffer, buf_len);
            buf_len = 0;
        }

        format++;
    }

    if (buf_len > 0)
    {
        total_len += buf_len;
        write(1, buffer, buf_len);
        buf_len = 0;
    }

    va_end(output);
    return total_len;
}
