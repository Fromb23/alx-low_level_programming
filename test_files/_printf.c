#include "main.h"

/**
 * _printf - Custom printf function
 * @format:Format string
 *
 * Return: Number of characters printed(excluding null byte)
 */

int _printf(const char *format, ...)
{
	va_list output;
	size_t i, num_handlers = NUM_HANDLERS;
	int total_len = 0;
	char buffer[BUFFER_SIZE];

	va_start(output, format);

	while (*format)
	{
		if (*format == '%' && *(format + 1) != '\0')
		{
			if (format[1] == '%')
			{
				_myPutchar('%');
				format += 2;
			}
			else
			{
				for (i = 0; i < num_handlers; i++)
				{
					if (format[1] == handlers[i].t[0])
					{
						total_len = handlers[i].f(output);
						break;
					}
				}
				format += 2;
			}
		}
		else
		{
			_myPutchar(*format);
			format++;
		}
	}
	write(1, &buffer, total_len);

	va_end(output);
	return (total_len);
}
