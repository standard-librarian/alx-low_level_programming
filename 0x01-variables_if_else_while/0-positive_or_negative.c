#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - This is the entry point
 * Return: 0 if the main runs successfully
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%d ", n);
	if (n > 0)
		puts("is positive");
	else if (n < 0)
		puts("is negative");
	else
		puts("is zero");
	return (0);
}
