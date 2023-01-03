#include "main.h"

/*
 * _memset() - Function to fill out a buffer with constant of specific size
 * @n: specified size in bytes
 * @s: points out the buffer
 * @b: char to be used to fill the buffer
 *
 * Return: the pointer to s memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for(i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
