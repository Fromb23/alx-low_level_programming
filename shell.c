#include "main.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char *buffer = NULL;

    while (1)
    {
        printf("$ ");
        fflush(stdout);

        buffer = readLine();

        if (buffer[0] == '\0')
        {
            break;
        }

        buffer[strlen(buffer) - 1] = '\0';

        if (buffer[0] != '\0')
        {
            /** printf("%s\n", buffer); **/
            parseCommand(buffer);
        }

        free(buffer);
    }

    fflush(stdout);

    return 0;
}

/**
void executeCommand(char *args[])
{
    int status;
    char *endptr;
    long exit_status;
    pid_t pid, wpid;

    pid = fork();
    if (pid == -1)
    {
        perror("Error");
        exit(EXIT_FAILURE);
    }
    else if (pid == 0)
    {
        execvp(args[0], args);
        fprintf(stderr, "Error: No such file or directory\n");
        exit(EXIT_FAILURE);
    }
    else
    {
	    (void)wpid;
	    do {
		    wpid = waitpid(pid, &status, WUNTRACED);
	    } while (!WIFEXITED(status) && !WIFSIGNALED(status));
    if (strcmp(args[0], "exit") == 0)
        {
            if (args[1] != NULL)
            {
                errno = 0;
                exit_status = strtol(args[1], &endptr, 10);

                if ((errno == ERANGE && (exit_status == LONG_MAX || exit_status == LONG_MIN)) || (errno != 0 && exit_status == 0) || *endptr != '\0')
                {
                    perror("Error");
                    _exit(EXIT_FAILURE);
                }

                _exit((int)exit_status);
            }
            else
            {
                _exit(EXIT_SUCCESS);
            }
        }
    } 
}
**/
