#include "main.h"
/**
 * _memcpy - aaa
 *
 * @dest: 1
 * @src: 2
 * @n: n
 *
 * Return: Dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
