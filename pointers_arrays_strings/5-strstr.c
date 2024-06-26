#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - aaaa
 *
 * @s: string
 * @accept: string
 *
 * Return: pointer
 *
 */

char *_strpbrk(char *s, char *accept)
{
	for (; *s != '\0'; s++)
	{
		for (char *p = accept; *p != '\0'; p++)
		{
			if (*s == *p)
			{
				return s;
			}
		}
	}
	return NULL;
}
