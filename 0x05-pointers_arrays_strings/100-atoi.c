int *_atoi(char *s)
{
	int i, neg, num, *p = 0;

	for (i = 0; *(s + i) < '0' || *(s + i) > '9'; i++)
	{
		if (*(s + i) == '-')
			neg++;
	}

	for (; *(s + i) > '0' && *(s + i) < '9'; i++)
	{
		num *= 10;
		num += (int) (*(s + i) - '0');
	}
	num *= (-2 * (neg % 2 - 0.5));
	*p = num;
	return (p);
}
