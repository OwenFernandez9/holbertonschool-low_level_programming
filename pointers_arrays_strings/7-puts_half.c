#include "main.h"
/**
 * puts_half - imprime la mitad
 *
 * @str: string
 */
void puts_half(char *str)
{
	int l;
	int n;

	for (l = 0; str[l] != '\0'; l++)
	{
	}
	if (l % 2 == 0)
	{
		n = l / 2;
	}
	else
	{
		n = (l - 1) / 2 + 1;
	}
	for (; n < l; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
