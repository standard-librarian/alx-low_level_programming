#include <stdlib.h>
#include <stdio.h>

/**
 * main - check the code
 *
 * @argc: counter of the cli args
 * @argv: the vector of the cli args
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int change = 0, cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	change += (cents / 25);
	cents %= 25;
	change += (cents / 10);
	cents %= 10;
	change += (cents / 5);
	cents %= 5;
	change += (cents / 2);
	cents %= 2;
	change += (cents);
	printf("%d\n", change);
	return (0);
}
