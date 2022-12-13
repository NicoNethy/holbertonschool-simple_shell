#include "main.h"
/**
 * main - its the shell
 * Return: it works
 */
int main(void)
{
        pid_t pidc;
        char *token, *b = NULL;
        size_t bufsize = 0;
        size_t characters;
        char **argv;
        int status;
        struct stat sb;
        char *str;
        char *getenv = NULL, *command = NULL;
        const char *tokendup;
        //char *path;

        while (1)
        {
                if (isatty(0) == 1)
                        printf("$ ");
                if (getline(&b, &bufsize, stdin) == -1)
                {
                        printf("\n");
                        break;
                }
                  token = strtok(b, " \n");
                //printf("%s\n prueba", token);
                /**while (token);
                {
                        token = strtok(NULL, " \n");
                        tokendup = strdup(b);
                }*/
                getenv = _getenv("PATH");
                command = _getcommand(getenv, token);
                pidc = fork();
                wait(&status);
                //path = getenv("PATH");
                //*(void)path;
                //token2 = strtok(path, ":");
                if (pidc == 0)
                {
                        execve(command, argv, NULL);
                }
                else
                {
                        //printf("No such file or directory\n");
                        break;
                }
                if (pidc == -1)
                {
                        printf("Error de forkeo\n");
                }
                if (_strcmp(b, "exit") == 0)
                {
                        free(b); return (0);
                }
        }
        free(b);
        return (0);
}
