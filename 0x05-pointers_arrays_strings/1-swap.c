#include <stdio.h>

/**
 * swap_int - change the value of the var pointed to by n
 * @a: pointer to int
 * @b: pointer to int
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int *tmp = a;
	*a = *b;
	*b = *tmp
}
