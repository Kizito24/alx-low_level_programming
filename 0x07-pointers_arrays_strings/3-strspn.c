#include "main.h"

/**
 * _strspn - Counts the number of bytes of a string contained in another string
 * @s: String to be searched
 * @accept: String to be searched for
 *
 * Return: The number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0, suppossed_count = 0;
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				count++;
		}
		suppossed_count++;
		if (count == 0 || count != suppossed_count)
			break;
	}
	return (count);
}
