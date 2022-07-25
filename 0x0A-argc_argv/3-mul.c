#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers.
 * @argc: number of command line argument
 * @argv: array of command line argument
 * Return: Always success 0
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	return (0);
}
