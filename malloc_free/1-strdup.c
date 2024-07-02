#include "main.h"
#include <stdlib.h>
/**
 * _strdup - aaa
 *
 * @str: cadena
 * Return: 0
 */
char *_strdup(char *str)
{
	int l;
	char *copia;
	int c;

	if (str == NULL)
		return (NULL);

	for (l = 0; str[l] != '\0'; l++)
	{
	}

	copia = malloc(l + 1 * sizeof(char));

	if (copia == NULL)
		return (NULL);
	for (c = 0; str[c] != '\0'; c++)
	{
		copia[c] = str[c];
	}
	c++;
	copia[c] = '\0';
	return (copia);


}
