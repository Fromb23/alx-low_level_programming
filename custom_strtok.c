#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *custom_strtok(char *str, const char *delim)
{
    static char *current = NULL;
    char *start, *end;
    if (str != NULL)
    {
        current = str;
    }

    if (current == NULL || *current == '\0')
    {
        return NULL;
    }

    while (*current != '\0' && strchr(delim, *current) != NULL)
    {
        ++current;
    }

    if (*current == '\0')
    {
        return NULL; 
    }

    start = current;
    end = strpbrk(start, delim);

    if (end == NULL)
    {
        current += strlen(start);
    }
    else
    {
        *end = '\0';
        current = end + 1;
    }

    return start;
}

