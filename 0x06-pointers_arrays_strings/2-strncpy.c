#include <stdio.h>
#include <string.h>
/**
 * _strncpy - function that concatenates
 *          two strings.
 *
 * @dest: pointer to destnation input
 * @src: pointer to source input
 * @n: number
 *
 * Return: pointer to resulting string @dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; *(src + i) != '\0' && i < n; i++)
		*(dest + i) = *(src + i);
	*(dest + l + i) = '\0';
	return (dest);

}

#ifdef TEST
/**
 * main - function for testing
 *
 * Return: int
*/
int main(void)
{
	char s1[] = "0123456789";
	char s2[] = "0123456789";

	printf("%d\n", (int) strlen(s1));
	char *p = _strncpy(s1, s2);

	printf("%d\n", (int) strlen(p));
	puts(p);
	return (0);
}
#endif
