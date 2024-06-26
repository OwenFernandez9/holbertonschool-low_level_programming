#include "main.h"
#include <stdio.h>
/**
 * _atoi - aaa
 *
 * @s: s
 * Return: retorno
 */
int _atoi(char *s)
{
	int sign = 1;
	int num = 0;

	for (; *s != '\0'; s++)
	{
		if (*s == '-')
		{
			sign = -sign;
		}
		else if (*s == '+')
		{
		}
		else if (*s >= '0' && *s <= '9')
		{
			num = num * 10 + (*s - '0');
		}
		else if (num != 0)
		{
			break;
		}
	}
	return (sign * num);
}
