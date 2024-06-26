#include "main.h"
/**
 * _strlen_recursion - aaaa
 *
 * _strlen_aux - bbbbb
 *
 * @s: s
 * @len: longitud
 * Return: Return
 */
int _strlen_aux(char *s, int len)
{
	if (*s == '\0')
		return (len);
	else
		return (_strlen_aux(s + 1, len + 1));
}
int _strlen_recursion(char *s)
{
	return (_strlen_aux(s, 0));
}
