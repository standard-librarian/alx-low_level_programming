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
	if(cents <= 0)
	{
		printf("0\n");
		return 0;
	}
/*	change += (cents / 25);
	cents %= 25;
	change += (cents / 10);
	cents %= 10;
	change += (cents / 5);
	cents %= 5;
	change += (cents / 2);
	cents %= 2;
	change += (cents);
	*/
	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents -= 2;
		else if (cents >= 1)
			cents -= 1;
		coins_number += 1;
	}
	printf("%d\n", change);
	return (0);
}
