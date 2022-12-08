#include "main.h"
/**
 *
 */
int main(void)
{
	pid_t pidc;
	char *buff, *b = NULL;
	size_t bufsize = 32;
	size_t characters;
	char *argv[] = {"/bin/ls", "/usr/", NULL};
	int status;
	struct stat sb;
	//char * token = strtok(buffer, " ");

	while (1)
	{
		printf("$ ");

		if (getline(&b, &bufsize, stdin) == -1)
		{
			printf("\n");
			break;
		}

		buff = strtok(b, "\n");
		argv[1] = NULL;

		pidc = fork();
		wait(&status);

		if (pidc == 0)
		{
			if (stat(buff, &sb) == 0)
			{
				execve(buff, argv, NULL);
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
	return (0);
}
