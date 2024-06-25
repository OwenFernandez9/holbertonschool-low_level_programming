#include "main.h"
/**
 * _strncpy - funcion para copiar
 * @dest: string 1
 * @src: string 2
 * @n: el numero de caracteres del origen
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
