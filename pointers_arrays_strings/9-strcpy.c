#include "main.h"
/**
 * _strcpy - copia arrays
 *
 * @src: string 1
 * @dest: string 2
 * Return: Array 2
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
