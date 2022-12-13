#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <string.h>
#include <sys/stat.h>


char **creatematriz(char **m, char *tokenizar, const char *delim, int ntoken);

extern char **environ;

char *_getenv(const char *name);

char *_strcat(char *dest, char *src);

int _strcmp(char *s1, char *s2);

char *_strdup(char *str);

char *_getcommand(char *path, char *command);

#endif
