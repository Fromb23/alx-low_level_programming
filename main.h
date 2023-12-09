#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <errno.h>
#include <limits.h>
void updatePWD();
void parseCommands(char *commands);
char* trimSpaces(char *str);
char *custom_strtok_r(char *str, const char *delim, char **saveptr);

void parseCommand(char *command);
void executeCommand(char *args[]);
void handleBuiltInCommands(char *args[]);

char *readLine();
char* readLineHelper();

void processLine(char* buffer);

char *custom_strtok(char *str, const char *delim);

void handleExit(char *args[]);
#endif
