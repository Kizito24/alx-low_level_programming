#include <stdio.h>
#include <stdlib.h>
#include  "main.h"

/**
 * _strdup - allocates memory for the duplicate of a string
 * @str: pointer to the string to be duplicated and allocated space
 *
 * Return: pointer to the memory allocated for ths string,
 * NULL if str = NULL or insufficient memory available.
 */

char *_strdup(char *str)
{
	char *dupstr;
	unsigned int i;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		continue;

	i++;
	printf("i = %d\n", i);

	dupstr = malloc(sizeof(char) * i);

	if (dupstr == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		dupstr[i] = str[i];
	}
	dupstr[i] = '\0';

	return (dupstr);
}
