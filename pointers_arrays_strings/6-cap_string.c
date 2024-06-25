#include "main.h"
/**
 * *cap_string - aaa
 *
 * @s: spring
 * Return: 0
 */
char *cap_string(char *s)
{
	int l, i;
	const char *p;

	if (s[0] >= 97 && s[0] <= 122)
	{
		s[0] = s[0] - 32;
	}

	p = s;

	while (*p != '\0')
		p++;
	l = p - s;
	for (i = 0; i <= l; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			i--;
			if (s[i] == ' ' ||  s[i] == 9 || s[i] == '\n' || s[i] == ',' || s[i] == '.')
			{
				i++;
				s[i] = s[i] - 32;
				i--;
			}
			else if  (s[i] == '?' || s[i] == 34 || s[i] == '{' || s[i] == '}')
			{
				i++;
				s[i] = s[i] - 32;
				i--;
			}
			i++;
		}
	}
	return (s);
}
