#include <stdio.h>
#include <string.h>

/**
 * rev_string - reverse a string
 * @s: pointer to the sing
 * Return: void
 */
void rev_string(char *s)
{
	int i;
	char tmp;

	for (i = 0; i < (int)  strlen(s) / 2; i++)
	{
		tmp = s[i];
		s[i] = s[strlen(s) - 1 - i];
		s[strlen(s) - 1 - i] = tmp;
	}
}

#ifdef TEST
/**
 * main - test main function, gets called from the bash cmd "gcc -DTEST"
 * Return:§Always 0
 */
int main(void)
{
	char s[] = "Hello, world!\n";

	rev_string(s);
	printf("%s\n", s);
}
#endif
