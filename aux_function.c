#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @dest: Destination string.
 * @src: String to add to end of dest.
 *
 * Description: Concatenates two strings. Appends the src string to the dest
 * string, overwriting the terminating null byte (\0) at the end of dest, and
 * then adds a terminating null byte.
 * Return: char pointer to dest.
 */

char *_strcat(char *dest, char *src)
{
	int count = 0;
	int src_count = 0;
	char *tmp = dest;
	char *tmp2 = src;

	while (*dest)
		dest++;
	while (*src++)
		src_count++;
	while (count < src_count)
	{
		*dest++ = *tmp2++;
		count++;
	}
	*dest = '\0';
	return (tmp);
}
/**
 * _strcmp - compares two strings
 * @s1: string parameter
 * @s2: string parameter to compares
 *
 *Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	for (; s1[i] && s2[i]; i++)
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	return (0);
}
/**
  * _strdup - returns a pointer to a newly allocated space in memory.
  * @str: String parameter.
  *
  * Return: returns a pointer to a new string which is a duplicate of the
  * string str, NULL if str is NULL or if dup is NULL.
  */

char *_strdup(char *str)
{
	char *dup;
	int i, j;

	if (str == NULL)
		return (NULL);

	for (j = 0; str[j] != '\0'; j++)
	{
	}

	j++;
	dup = malloc(sizeof(char) * j);

	if (dup == NULL)
		return (NULL);

	for (i = 0; i < j; i++)
		dup[i] = str[i];
	return (dup);
}
