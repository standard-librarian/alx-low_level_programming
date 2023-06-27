#include <stdio.h>

/**
 * _strlen - a version of the c strlen
 * @s: pointer to the string
 * Return: int, the length of the string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;

	return (i);
}

#ifdef TEST
/**
 * main - test main function, gets called from the bash cmd "gcc -DTEST"
 * Return:§Always 0
 */
int main(void)
{
	char s[] = "Hello, world!";

	printf("%d\n", _strlen(s));
}
#endif
