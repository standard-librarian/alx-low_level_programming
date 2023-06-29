#include <stdio.h>
#include <string.h>

/**
 * puts_half - a version of the c
 * @str: pointer to the string
 * Return: void
 */
void puts_half(char *str)
{
	int i;

	for (i = strlen(str) / 2; str[i] != '\0'; i++)
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
	char s1[] = "Hello, world!";
	char s2[] = "0123456789";
	char s3[] = "012345678";

	puts_half(s1);
	puts_half(s2);
	puts_half(s3);
}
#endif
