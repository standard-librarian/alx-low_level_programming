#include <stdio.h>
#include <string.h>

/**
 * print_array - a version of the c
 * @a: pointer to the array
 * @n: number of elements to be printed
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	if (n > 0)
		printf("%d", *a);
	for (i = 1; i < n; i++)
	{
		printf(", %d", *(a + i));
	}
	putchar('\n');
}

#ifdef TEST
/**
 * main - test main function, gets called from the bash cmd "gcc -DTEST"
 * Return:§Always 0
 */
int main(void)
{
	char s1[] = "Hello, world!";
	char s2[] = "0123456789";
	char s3[] = "012345678";

	print_array(s1);
	print_array(s2);
	print_array(s3);
}
#endif
