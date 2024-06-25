#include "main.h"
/**
 * *cap_string - aaa
 *
 * @s: spring
 * Return: 0
 */
char *cap_string(char *s)
{
	int i;

	if (s[0] >= 'a' && s[0] <= 'z')
	{
		s[0] = s[0] == -32;
	}

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ',' || s[i] == ';' || s[i] == '.' || s[i] == '!')
		{
			i++;

			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i] - 32;
			}
		}

		else if (s[i] == '{' || s[i] == '}' || s[i] == '?' || s[i] == '"')
		{
			i++;

			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i] - 32;
			}
		}
		else if (s[i] == '\n' || s[i] == ' ' || s[i] == '\t')
		{
			i++;

			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i] - 32;
			}
		}
	}
	return (s);
}
