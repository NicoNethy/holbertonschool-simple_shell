#include "main.h"
/**
 *
 *
 */

char **creatematriz(char **m, char *tokenizar, const char *delim, int ntoken)
{
	char *token;
	int i = 0;

	m = malloc(sizeof(char *) * ntoken);

	token = strtok(tokenizar, delim);

	for (i = 0; token != NULL; i++)
	{
		m[i] = strdup(token);
		token = strtok(NULL, delim);
	}
	m[i] = NULL;
	free(token);
	return (m);
}
