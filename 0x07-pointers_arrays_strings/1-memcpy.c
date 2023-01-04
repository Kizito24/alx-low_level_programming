#include "main.h"

/*
 * -memcpy - Fills a buffer with a constant for a specified size
 * @src: This is the char that will be used to fill buffer
 * @dest: This is the buffer to be filled
 * @n: This is the no of bytes to fill in the memory array of dest
 *
 * Return: returns dest
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
