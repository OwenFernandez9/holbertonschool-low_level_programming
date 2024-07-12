#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - imprime strings
 *
 * @separator: separador, punto y coma
 * @n: variable
 * Return: retorno
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int l;
	va_list p;
	char *s;

	if (!separator)
	{
		separator = "";
	}

	va_start(p, n);

	for (l = 0; l < n; l++)
	{
		s = va_arg(p, char*);
		if (!s)
		{
			s = "(nil)";
		}
		if (l + 1 < n)
		{
			printf("%s%s", s, separator);
		}
		else
		{
			printf("%s", s);
		}
	}
	va_end(p);
	putchar('\n');
}
