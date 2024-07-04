#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concatena strings
 *
 * @s1: string 1
 * @s2: string 2
 * Return: retorna las 2 cadenas juntas osea s3
 */
char *str_concat(char *s1, char *s2)
{
	int l1; int l2; int x; int x2 = 0;
	char *s3;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (l1 = 0; s1[l1] != '\0'; l1++)
	{
	}
	for (l2 = 0; s2[l2] != '\0'; l2++)
	{
	}
	s3 = malloc((l1 + l2 + 1) * sizeof(char));

	if (s3 == 0)
		return (NULL);

	for (x = 0; x < l1; x++)
	{
		s3[x] = s1[x];
	}	
	for(x2 = 0; x2 < l2; x2++)
	{
		s3[x] = s2[x2];
		x++;
	}

	s3[x] = '\0';
	return (s3);
}
