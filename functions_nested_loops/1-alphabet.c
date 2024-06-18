#include "main.h"

/**
 * print_alphabet - imprime el alfabeto en minuscula
 */
void print_alphabet(void)
{
	char abc = 'a';

	while (abc <= 'z')
	{
		_putchar(abc);
		abc++;
	}
	_putchar('\n');
}
