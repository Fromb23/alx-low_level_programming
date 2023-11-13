#include "main.h"

/**
 * handle_s - Handles the specified format specifier.
 * @specifier: The format specifier to handle.
 * @args: The va_list of arguments.
 * @buffer: The buffer to store the formatted output.
 * @buf_len: Pointer to the length of the buffer.
 *
 * This function iterates through the registered handlers and invokes the
 * corresponding handler for the given speciefer. It updates the buff
 * and buf_len accordingly.
 *
 * Return: The number of characters written to the buffer, or -1 on failure
 **/

int handle_s(char specifier, va_list args, char *buffer, size_t *buf_len)

{
	size_t i;
	int len = -1;
	HandlerArgs handler_args = {0};

	for (i = 0; i < NUM_HANDLERS; i++)
	{
		if (specifier == handlers[i].t[0])
		{
			va_copy(handler_args.output, args);
			handler_args.buffer_ptr = buffer + *buf_len;
			handler_args.buffer_start = buffer;

		len = handlers[i].f(handler_args);

		if (len < 0)
			return (-1);

		*buf_len += len;
		break;
		}
	}
	if (i == NUM_HANDLERS)
	{
		buffer[(*buf_len)++] = '%';
		buffer[(*buf_len)++] = specifier;
	}
	return (len);
}
