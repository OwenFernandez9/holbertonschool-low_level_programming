#include "main.h"
/**
 * _print_rev_recursion - aaa
 *
 * @s: string
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		s--;
		_putchar(*s);
		_puts_recursion(s - 1);
	}
	else
		_putchar('\n');

}
