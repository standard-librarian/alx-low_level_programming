#include <stdio.h>
#include <limits.h>

int _atoi(char *s)
{
	int i, neg = 0, num = 0;

	for (i = 0; *(s + i) < '0' || *(s + i) > '9'; i++)
	{
		if (*(s + i) == '-')
			neg++;
	}

	for (; *(s + i) >= '0' && *(s + i) <= '9'; i++)
		num = num * 10 + (*(s + i) - '0');
	
	num *= (-2 * (neg % 2 - 0.5));
	return (num > INT_MIN?num:INT_MIN);
}
