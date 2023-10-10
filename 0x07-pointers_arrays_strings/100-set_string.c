#include "main.h"
#include <stddef.h>

/**
 * set_string - Set a string to a new value
 * @s: A double pointer to a character pointer
 * @to: The new value to assign to *s
 **/

void set_string(char **s, char *to)

{
	if (s != NULL)
	{
	*s = to;
	}

}
