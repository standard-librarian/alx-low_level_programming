#include <stdio.h>
#include <limits.h>

/**
 * _atoi - converts a string to an integer
 *
 * @s: string input parameter
 *
 * Return: converted integer from string
*/

int _atoi(char *s)
{
	int i, neg = 0, unsigned num = 0;

	for (i = 0; *(s + i) < '0' || *(s + i) > '9'; i++)
	{
		if (*(s + i) == '-')
			neg++;
	}

	for (; *(s + i) >= '0' && *(s + i) <= '9'; i++)
		num = num * 10 + (*(s + i) - '0');
 
	return ((-2 * (neg % 2 - 0.5)) * num);
}
