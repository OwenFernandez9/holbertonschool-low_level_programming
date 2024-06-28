#include "main.h"
/**
 */
int _sqrt_recursion(int n)
{
	if ( n != (int)n)
	{
		return (- 1);
	}
	else
		return _sqrt_recursion(n+ 1);
}
