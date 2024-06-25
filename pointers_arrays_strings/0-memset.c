#include "main.h"
/**
 * _memset - aaa
 *
 * @s: puntero
 * @b: b
 * @n: cantidad bytes
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n;  i++)
	{
		s[i] = b;
	}
	return (s);
}
