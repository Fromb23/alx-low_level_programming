#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define BUFFER_SIZE 256


static char buffer[BUFFER_SIZE];
static size_t currentPosition = 0;
char* readLine()
{
    if (currentPosition == 0)
    {
        ssize_t bytesRead = read(STDIN_FILENO, buffer, BUFFER_SIZE - 1);

        if (bytesRead <= 0)
        {
            char* result = (char*)malloc(currentPosition + 1);
            if (result == NULL)
            {
                perror("Memory allocation error");
                exit(EXIT_FAILURE);
            }

            strncpy(result, buffer, currentPosition);
            result[currentPosition] = '\0';

            return result;
        }

        currentPosition += bytesRead;
    }

    return readLineHelper();
}

char* readLineHelper()
{
    size_t i;

    for (i = 0; i < currentPosition; ++i)
    {
        if (buffer[i] == '\n')
        {
            char* result = (char*)malloc(i + 2);
            if (result == NULL)
            {
                perror("Memory allocation error");
                exit(EXIT_FAILURE);
            }

            strncpy(result, buffer, i + 1);
            result[i + 1] = '\0';

            memmove(buffer, buffer + i + 1, currentPosition - i - 1);
            currentPosition -= i + 1;

            return result;
        }
    }

    currentPosition = 0;
    return readLine();
}

void processLine(char* buffer)
{
    if (buffer[0] != '\0')
    {
        buffer[strlen(buffer) - 1] = '\0';
        printf("%s\n", buffer);
    }
    free(buffer);
}
