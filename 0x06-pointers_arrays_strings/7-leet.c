/**
 * leet - a function that encodes a string into 1337
 *
 * @s: string input
 *
 * Return: @s
*/

char *leet(char *s)
{
	int i;
	char smol[] = "4bcd3fghijk1mn0pqrs7uvwxyz";
	char big[]  = "4BCD3FGHIJK1MNOPQRS7UVWXYZ";

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' || s[i] <= 'z')
			s[i] = smol[s[i] - 'a'];
		else
			s[i] = big[s[i] - 'A'];
	}
	return (s);
}
