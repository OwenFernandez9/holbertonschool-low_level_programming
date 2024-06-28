#include "main.h"
/**
 * _sqrt_aux - bbb
 *
 * @x: x
 * @n: n
 * Return: retorno
 */
int _sqrt_aux(int x, int n)
{
	if (x > n)
		return (-1);

	else if (n != (x * x))
		x++;
	else
		return (x);

	return (_sqrt_aux(x, n));
}
/**
 * _sqrt_recursion - aaaa
 *
 * @n: n
 * Return: retorno
 */
int _sqrt_recursion(int n)
{
	int x = 1;

	return (_sqrt_aux(x, n));
}
