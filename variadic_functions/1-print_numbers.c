#include "variadic_functions.h"
/**
 * print_numbers - imprime numeros
 *
 * @separator: separador, punto y coma
 * @n: variable
 * Return: retorno
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int l;
	va_list p;

	if (!separator)
	{
		return;
	}

	va_start(p, n);

	for (l = 0; l < n; l++)
	{
		if (l + 1 < n)
		{
			 printf("%d%s", va_arg(p, int), separator);
		}
		else
		{
			printf("%d", va_arg(p, int));
		}
	}
	va_end(p);
	putchar('\n');
}
