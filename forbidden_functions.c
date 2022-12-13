#include "main.h"
/**
 * _getenv - Search for the path route
 * @name: Name
 * Return:NULL
 */
char *_getenv(const char *name)
{
	int i;
	char *str;

	for (i = 0; environ[i]; i++)
	{
		str = strdup(environ[i]);
		str = strtok(environ[i], "=");
		if (strcmp(str, name) == 0)
		{
			str = strtok(NULL, "\n");
			return (str);
		}
	}
	return (NULL);
}

/**
 * _getcommand - concatenates two strings
 * @path: the path
 * @command: the command
 * Return: NULL
 */
char *_getcommand(char *path, char *command)
{
	char *token2 = NULL;
	char *aux = NULL;
	struct stat st;

	if (stat(command, &st) == 0)
		return (command);
	token2 = strtok(path, ":");

	while (token2)
	{
		aux = malloc(sizeof(char) * (strlen(token2) + strlen(command)) + 2);
		if (aux == NULL)
		{
			return (NULL);
		}
		strcpy(aux, token2);
		strcat(aux, "/");
		strcat(aux, command);
		if (stat(aux, &st) == 0)
			return (aux);
		token2 = strtok(NULL, ":");
		free(aux);
		aux = (NULL);
	}
	return (NULL);
}
