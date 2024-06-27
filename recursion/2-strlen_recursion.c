#include "main.h"
/**
 * _strlen_recursion - aaaa
 *
 * @s: s
 * Return: Return
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (_strlen_recursion(s + 1));
}
