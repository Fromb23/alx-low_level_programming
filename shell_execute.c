#include "main.h"

extern char **environ;
/**
void executeCommand(char *args[])
{
    int status;
    pid_t pid, wpid;

    pid = fork();
    if (pid == -1)
    {
        perror("Error");
        exit(EXIT_FAILURE);
    }
    else if (pid == 0)
    {
        execve(args[0], args, environ);
        fprintf(stderr, "Error: No such file or directory\n");
        exit(EXIT_FAILURE);
    }
    else
    {
        (void)wpid;
        do
        {
            wpid = waitpid(pid, &status, WUNTRACED);
        } while (!WIFEXITED(status) && !WIFSIGNALED(status));

        if (strcmp(args[0], "exit") == 0)
        {
            handleExit(args);
        }
    }
}
**/

void executeCommand(char *args[])
{
    int status;
    pid_t pid, wpid;

    pid = fork();
    if (pid == -1)
    {
        perror("Error");
        exit(EXIT_FAILURE);
    }
    else if (pid == 0)
    {
        if (strchr(args[0], '/') == NULL)
        {
            char *path = getenv("PATH");
            char *pathCopy = strdup(path);
            char *dir = strtok(pathCopy, ":");

            while (dir != NULL)
            {
                char fullPath[1024];
                snprintf(fullPath, sizeof(fullPath), "%s/%s", dir, args[0]);
                execve(fullPath, args, environ);
                dir = strtok(NULL, ":");
            }

            fprintf(stderr, "Error: Command not found in PATH\n");
            free(pathCopy);
            exit(EXIT_FAILURE);
        }
        else
        {
            execve(args[0], args, environ);
            fprintf(stderr, "Error: No such file or directory\n");
            exit(EXIT_FAILURE);
        }
    }
    else
    {
	    (void)wpid;
        do
        {
            wpid = waitpid(pid, &status, WUNTRACED);
        } while (!WIFEXITED(status) && !WIFSIGNALED(status));

        if (strcmp(args[0], "exit") == 0)
        {
            handleExit(args);
        }
    }
}


void handleExit(char *args[])
{
    int status;
    char *endptr;
    long exit_status;
    pid_t wpid;

    do
    {
        wpid = waitpid(-1, &status, WUNTRACED);
    } while (wpid > 0 && !WIFEXITED(status) && !WIFSIGNALED(status));

    if (args[1] != NULL)
    {
        errno = 0;
        exit_status = strtol(args[1], &endptr, 10);

        if ((errno == ERANGE && (exit_status == LONG_MAX || exit_status == LONG_MIN)) ||
            (errno != 0 && exit_status == 0) || *endptr != '\0')
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
