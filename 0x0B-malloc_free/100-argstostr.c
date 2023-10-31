#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * argstostr - Concatenates command-line arguments into a single string
 * @ac: Argument count
 * @av: Array of command-line arguments
 *
 * Return: A pointer to the concatenated string, or NULL on failure
 **/

char *argstostr(int ac, char **av)

{
	char *concat_str;
	int total_len = 0, i, j, index = 0;
	size_t k;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		total_len += strlen(av[i]) + 1;
	}
	concat_str = malloc((total_len + 1) * sizeof(char));

	if (concat_str == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < ac; j++)
	{
		for (k = 0; k < strlen(av[j]); k++)
		{
			concat_str[index] = av[j][k];
			index++;
		}
		concat_str[index] = '\n';
		index++;
	}
	concat_str[total_len] = '\0';
	return (concat_str);
}
