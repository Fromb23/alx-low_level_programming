#include "main.h"

int handle_specifier(char specifier, va_list args, char *buffer, size_t *buf_len)
{
    size_t i;
    int len;

    for (i = 0; i < NUM_HANDLERS; i++)
    {
        if (specifier == handlers[i].t[0])
        {
	HandlerArgs handler_args;
       	va_copy(handler_args.output, args);
	handler_args.buffer_ptr = buffer + *buf_len;
	handler_args.buffer_start = buffer;
        
	len = handlers[i].f(handler_args);

            if (len < 0)
            {
                return -1;
            }

            *buf_len += len;
            return len;
        }
    }

    return 0;
}
