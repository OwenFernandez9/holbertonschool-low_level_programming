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

	for (inicial = 0; s[inicial] != '\0'; inicial++)
	{
	}
	for (b = inicial - 1; b >= 0; b--)
	{
		_putchar(s[b]);
	}
	_putchar('\n');
}
