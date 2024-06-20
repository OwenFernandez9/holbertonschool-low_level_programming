#include "main.h"
/**
 * _puts - check the code
 *
 * @str: jaja
 */
void _puts(char *str)
{
	int lent;

	for (lent = 0; str[lent] != '\0'; lent++)
	{
		._putchar(lent);
	}
}
