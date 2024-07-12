#include "variadic_functions.h"
/**
 * sum_them_all - suma
 * @n: cantidad
 * Return: retorno
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int l = 0;
	int sum = 0;
	va_list p;

	va_start(p, n);

	for (l = 0; l < n; l++)
	{
		sum += va_arg(p, int);
	}
	va_end(p);
	return (sum);

}
