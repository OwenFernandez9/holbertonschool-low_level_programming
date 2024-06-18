#include "main.h"
/**
 * print_line - Imprime guiones bajos en función de 
 * @n:  Los ti  Los tiempos de los guiones bajos
 * Return: No
 */
void print_line(int n)
{
	if (n > 0)
	{
		while (n > 0)
		{
			_putchar('_');
			n--;
		}
		_putchar('\n');
	} else
		_putchar('\n');
}
