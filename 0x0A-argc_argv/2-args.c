#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the name of the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("argv %d: = %s\n", i, argv[i]);
	}
	return (0);
}
