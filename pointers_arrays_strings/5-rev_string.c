#include "main.h"
/**
 * rev_string - revierte la cadena
 *
 * @s: cadena
 */
void rev_string(char *s)
{
	int l;
	int i;
	char c;

	for (l = 0; s[l] != '\0'; l++)
	{
	}
	for (i = 0; i < l / 2; i++)
	{
		c = s[i];
		s[i] = s[l - i - 1];
		s[l - i - 1] = c;
	}
}
