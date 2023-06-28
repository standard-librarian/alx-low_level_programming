#include <stdio.h>

/**
 * puts2 - a version of the c strlen
 * @str: pointer to the string
 * Return: void
 */
void puts2(char *str)
{
	int i;

	for (i = 1; str[i] != '\0' && str[i - 1] != '\0'; i += 2)
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
	char s1[] = "Hello, world!\n";
	char s2[] = "Hello, world\n";


	puts2(s1);
	puts2(s2);
}
#endif
