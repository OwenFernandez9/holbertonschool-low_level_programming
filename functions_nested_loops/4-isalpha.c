#include "main.h"
/**
 * _isalpha - function is used to check lowercase letter
 *
 * @c: character check
 *
 * Return: c is 1 and letters is 0
 */
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
