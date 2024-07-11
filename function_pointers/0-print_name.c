#include "function_pointers.h"
/**
 * print_name - imprime el nombre
 * @name: nombre
 * @f: puntero
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
