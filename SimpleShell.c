#include "main.h"
/**
 * main - its the shell
 * Return: it works
 */
int main(void)
{
	pid_t pidc;
	char *token, *b = NULL;
	size_t bufsize = 32;
	char *argv[bufsize];
	int status;
	struct stat sb;
	char **creatematriz(char **m, char *b, const char " \n", int ntoken)

	while (1)
	{
		printf("$ ");
		if (getline(&b, &bufsize, stdin) == -1)
		{
			printf("\n");
			break;
		}

		token = strtok(b, " \n");
		pidc = fork();
		wait(&status);

		if (pidc == 0)
		{
			if (stat(token, &sb) == 0)
			{
				execve(token, argv, NULL);
			}
			else
			{
				printf("No such file or directory\n");
				break;
			}
		}
		if (pidc == -1)
		{
			printf("Error de forkeo\n");
		}
	}
	free(b);
	return (0);
}
