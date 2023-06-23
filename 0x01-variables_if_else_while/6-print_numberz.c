#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - This is the entry point
 * Return: 0 if the main runs successfully
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar(i + 48);
	putchar('\n');
	return (0);
}
