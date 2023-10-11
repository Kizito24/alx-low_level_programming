#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: string to be concatenated
 * @s2: string to be concatenated with
 *
 * Return: Pointer to the newly allocated memory,
 * NULL if function fails.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k, new_strlen;
	char *ccat_str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		continue;

	new_strlen = i + n + 1;

	ccat_str = malloc(new_strlen);
	if (ccat_str == NULL)
		return (NULL);

	for (j = 0; s1[j] != '\0'; j++)
	{
		ccat_str[j] = s1[j];
	}

	for (k = 0; k < n; k++, j++)
	{
		ccat_str[j] = s2[k];
	}
	ccat_str[j] = '\0';

	return (ccat_str);
}

