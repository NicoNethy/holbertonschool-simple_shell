#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <string.h>
#include <sys/stat.h>
int main();

char **creatematriz(char **m, char *tokenizar, const char *delim, int ntoken);

extern char **environ;
char *_getenv(const char *name);
#endif













