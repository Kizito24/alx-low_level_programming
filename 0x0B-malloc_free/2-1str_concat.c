#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: first string to get concatenated
 * @s2: second string to be concatenateed to the first
 *
 * Return: pointer to the newly alocated space for the
 * string, NULL if function fails or one of the strings
 * is empty.
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, k, str_xlen, counter;
	char *str;

	if (s1 == NULL)
		s1 =  "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		continue;

	for (j = 0; s2[i] != '\0'; j++)
		continue;

	str_xlen = (i + j) + 1;
	printf("string length = %d\n", str_xlen);

	str = malloc(str_xlen);
	if (str == NULL)
		return (NULL);

	counter = 0;

	for (k = 0; k < i; k++)
	{
		str[counter] = s1[k];
		counter++;
	}
	for (k = 0; k < j; k++)
	{
		str[counter] = s2[k];
		counter++;
	}

	str[counter] = '\0';

	return (str);
}
