#include <stdio.h>
#include <string.h>

/**
 * print_rev - a version of the c slen
 * @s: pointer to the sing
 * Return: void
 */
void print_rev(char *s)
{
	int i;

	for (i = strlen(s) - 1; i >= 0; i--)
	{
		putchar(s[i]);
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
	char s[] = "Hello, world!\n";

	print_rev(s);
}
#endif
