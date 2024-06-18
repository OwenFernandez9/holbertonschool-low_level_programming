#include "main.h"

/**
 * print_numbers - Imprime numeros del 0 al 9
 *
 * Return: No
 */
void print_numbers(void)
{
	/* Use tabs for indentation */
	int counter;

	for (counter = 0; counter < 10; counter++)
	{
		_putchar(counter + '0');
	}
	_putchar('\n');
}
