#include <stdio.h>

/**
 * main - Program to pirint putchar to the screen
 * Return: Exits status is zero if succesful
 */
int main(void)
{
	char text[9] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(text[i]);
	}
	_putchar("\n");

	return (0);
}
