#include "main.h"
/**
 * _print_rev_recursion - imprime la cadena alrevez
 *
 * @s: s
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		--s;
		_putchar(*s);

	}

	else if (*s == 0)
		return;

	else
		_putchar('\n');
}
