#include "main.h"
/**
 * _print_rev_recursion - imprime la cadena alrevez
 *
 * @s 
 */
void _print_rev_recursion(char *s)
{
	if (*s <='\0')
	{
		--s;
		_putchar(*s);
		_puts_recursion(s + 1);
		return;
	}
	else
		_putchar('\n');
}
