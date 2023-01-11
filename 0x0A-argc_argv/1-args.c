#include <stdio.h>

/**
 * main - A program that prints its name
 * @argc: Argument count
 * @argv: Argument Vector
 *
 * Return: Always 0
 */

int main(int argc,  char *argv[])
{
	printf("%d\n", argc - 1);
	(void)argv;
	return (0);
}
