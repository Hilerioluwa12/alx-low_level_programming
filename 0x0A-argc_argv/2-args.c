#include <stdio.h>

/**
 * main - a program that prints all arguments it receives.
 * @argc: number of command argument input
 * @argv: array that contains the program line argument
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
