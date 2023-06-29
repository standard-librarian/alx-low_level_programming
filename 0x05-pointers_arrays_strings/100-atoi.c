int *_atoi(char *s)
{
	int i, neg = 0, num = 0, *p = &num;

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

	return (p);
}
