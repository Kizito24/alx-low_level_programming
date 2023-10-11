#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc
 *
 * Return: Pointer to the allocated memory,
 * 98 if it fails
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
