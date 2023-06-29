int *_atoi(char *s)
{
	int i, neg, num = 0;
	int *p = num;

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
	(*p) *= (-2 * (neg % 2 - 0.5));

	return (p);
}
