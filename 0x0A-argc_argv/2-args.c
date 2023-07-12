#include <stdio.h>

/**
 * main - check the code
 * @argc: counter of the cli args
 * @argv: the vector of the cli args
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0;i < argc; i++) 
		printf("%s\n", argv[i]);
	
	return (0);
}
