#include <stdio.h>

/**
 * main - a program that prints its name, followed by a new line
 * @argc: number of command input
 * @argv: array that contains the program command line string
 * Return: Always success 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
