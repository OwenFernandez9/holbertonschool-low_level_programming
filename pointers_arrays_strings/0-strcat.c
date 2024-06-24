#include "main.h"
/**
 * _strcat - junta dos string
 *
 * @src: array 1
 * @dest : array 2
 *
 * Return: las dos arrays
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
	}
	for (j = 0; dest[j] != '\0'; j++)
	{
		src[i] = dest[j];
	}
	return (dest);
}
