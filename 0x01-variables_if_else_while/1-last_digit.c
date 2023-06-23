#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - This is the entry point
 * Return: 0 if the main runs successfully
 */
int main(void)
{
	int n, m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
	printf("Last digit of %d is %d", n, m);
	if (m > 5)
		puts(" and is greater than 5");
	else if (n == 0)
		puts(" and is 0");
	else
		puts(" and is less than 6 and not 0");
	return (0);
}
