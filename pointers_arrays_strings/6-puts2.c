#include "main.h"

/**
 * puts2 - imprime los numeros pares
 * @str: Numeros pares
 *
 */
void puts2(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; ++a)
	{
		if (a % 2 != 0) /* no es divisible entre 2 */
			continue;
		else
			_putchar(str[a]);
	}
	_putchar('\n');
}
