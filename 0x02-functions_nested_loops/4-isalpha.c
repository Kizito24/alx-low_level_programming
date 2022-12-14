#include "main.h"

/**
 * _isalpha - Checks for alphabetic characters
 * @c: This ia an ASCII character
 *
 * Return: 0 if not an alphabet, 1 if so
 */
int _isalpha(int c)
{

	if ((c >= 97) && (c <= 122) || (c >= 65) && (c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
