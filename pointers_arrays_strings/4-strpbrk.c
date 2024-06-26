#include "main.h"
/**
 * _strpbrk - aaaa
 *
 * @s: s
 * @accept: accept
 *
 * Return: NULL
 *
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return &s[i];
			}
		}
		if (accept[j] == '\0')
		{
			break;
		}
	}
	return NULL;
}
