#include "main.h"
/**
 *
 */
char *_getenv(const char *name)
{
	int i;
	char *str;

	for(i = 0; environ[i]; i++)
	{
		str = strdup(environ[i]);
		str = strtok(environ[i], "=");
		if(strcmp(str, name) == 0)
		{
			str = strtok(NULL, "\n");
			return (str);
		}
	}
	return (NULL);
}

int main(void)
{
	printf("%s\n", _getenv("PATH"));
	return (0);
}
