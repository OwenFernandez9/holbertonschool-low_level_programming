#include "main.h"
/**
 * print_rev - check the code
 *
 * @s: s
 */
void print_rev(char *s)
{
	int inicial;

	int b;

	for (inicial = 0; str[inicial] != '\0'; inicial++)
	{
	}
	for (b = inicial - 1; b >= 0; b--)
	{
		_putchar(str[b]);
	}
	_putchar('\n');
}
