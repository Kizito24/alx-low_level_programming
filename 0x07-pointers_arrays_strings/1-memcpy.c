#include "main.h"

/*
 * -memcpy - Copy the memory area src
 * @src: The memory area to be copied from
 * @dest: The memory area to be copied to
 * @n: The number of bytes to be copied
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
