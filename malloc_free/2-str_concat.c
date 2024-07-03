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
	int l1;
	char *s3;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (l1 = 0; s1[l1] != '\0' && s2[l1] != '\0'; l1++)
	{
	}
	s3 = malloc(l1 + 1 * sizeof(char));

	if (s3 == 0)
		return (NULL);

	strcpy(s3, s1);
	strcat(s3, s2);

	return (s3);
}
