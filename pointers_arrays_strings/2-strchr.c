#include "main.h"
#include <stdio.h>
/**
 * _strchr - aaaa
 *
 * @s: s
 * @c: c
 *
 * Return: NULL
 */
char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}

	if (c == '\0')
	{
		return (s);
	}

	return (NULL);
}
