#include <stdio.h>

/**
 * _puts - a version of the c strlen
 * @str: pointer to the string
 * Return: void
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		putchar(str[i]);
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

	_puts(s);
}
#endif
