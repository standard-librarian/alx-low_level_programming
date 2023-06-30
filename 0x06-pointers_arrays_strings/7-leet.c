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
	char leet_alphabet[] = "4   3      1  0    7      ";

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == 'A' || s[i] == 'a'
				 || s[i] == 'E' || s[i] == 'e'
				 || s[i] == 'L' || s[i] == 'l'
				 || s[i] == 'T' || s[i] == 't'
				 || s[i] == 'O' || s[i] == 'o')
		{
			s[i] = leet_alphabet[i];
		}
	}
	return (s);
}
