#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - aaaa
 *
 * @s: s
 * @accept: accept
 *
 * Return: s
 *
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *p = accept;

		while (*p != '\0')
		{
			if (*s == *p)
			{
				return (s);
			}
			p++;
		}
		s++;
	}
	return (NULL);
}
