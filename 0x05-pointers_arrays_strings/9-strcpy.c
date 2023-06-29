#include <string.h>

/**
 * _strcpy - a version of the c
 * @dest: pointer to be copied to
 * @src: pointer that is copied from
 * Return: pointer to char
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i < (int) strlen(src); i++)
	{
		*(dest + i) = *(src + i);

	}
	*(dest + i) = '\0';

	return (dest);
}
