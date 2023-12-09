#include "main.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

extern char **environ;

void updatePWD()
{
    char cwd[1024];
    if (getcwd(cwd, sizeof(cwd)) != NULL)
    {
        setenv("PWD", cwd, 1);
    }
}

void handleBuiltInCommands(char *args[])
{
    if (strcmp(args[0], "exit") == 0)
    {
        fflush(stdout);
        exit(EXIT_SUCCESS);
    }
    else if (strcmp(args[0], "env") == 0)
    {
        char *env_var;
        int i = 0;
        while ((env_var = environ[i]) != NULL)
        {
            printf("%s\n", env_var);
            i++;
        }
    }
    else if (strcmp(args[0], "setenv") == 0)
    {
        if (args[1] != NULL && args[2] != NULL)
        {
            if (setenv(args[1], args[2], 1) != 0)
            {
                perror("Error: Unable to set environment variable");
            }
        }
        else
        {
            fprintf(stderr, "Error: Incorrect number of arguments for setenv\n");
        }
    }
    else if (strcmp(args[0], "unsetenv") == 0)
    {
        if (args[1] != NULL)
        {
            if (unsetenv(args[1]) != 0)
            {
                perror("Error: Unable to unset environment variable");
            }
        }
        else
        {
            fprintf(stderr, "Error: Incorrect number of arguments for unsetenv\n");
        }
    }
    else if (strcmp(args[0], "cd") == 0)
    {
        char *dir = args[1];
        char *oldpwd = getenv("PWD");

        if (dir == NULL)
        {
            dir = getenv("HOME");
        }
        else if (strcmp(dir, "-") == 0)
        {
            dir = getenv("OLDPWD");
        }

        if (chdir(dir) != 0)
        {
            perror("Error: Unable to change directory");
        }
        else
        {
            setenv("OLDPWD", oldpwd, 1);
            updatePWD();
        }
    }
    else
    {
        executeCommand(args);
    }
}

void parseCommands(char *commands) 

{
    char *token, *trimmedToken;

    token = custom_strtok(commands, ";");
    while (token != NULL) 
    {
        trimmedToken = trimSpaces(token);
        parseCommand(trimmedToken);
        token = custom_strtok(NULL, ";");
    }
}

void parseCommand(char *command)
{
    char *args[64], *token;
    int i = 0;
    char *trimmedCommand;

    trimmedCommand = trimSpaces(command);
    token = custom_strtok(trimmedCommand, " ");

    while (token != NULL)
    {
        args[i++] = token;
        token = custom_strtok(NULL, " ");
    }

    args[i] = NULL;

    if (i > 0)
    {
        handleBuiltInCommands(args);
    }
}
