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
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
