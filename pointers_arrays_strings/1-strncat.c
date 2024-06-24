#include "main.h"
/** 
 * _strcat - junta dos string
 *
 * @n: cantidad de bytes
 * @src: string 2
 * @dest : string 1
 *
 * Return: las dos string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; j < n src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';

	return (dest);
}
