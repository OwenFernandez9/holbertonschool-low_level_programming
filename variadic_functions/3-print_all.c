#include "variadic_functions.h"
/**
 */
void char_p(va_list p)
{
	putchar(va_arg(p, char));
}
/**
 */
void str_p(va_list p)
{
	char *aux = va_arg(p, char*);
	
	if (!aux)
	{
		printf("%p", aux);
		return;
	}
	printf("%s", aux);
}
/**
 */
void int_p(va_list p)
{
	printf("%d", va_arg(p, int));
}
/**
 */
void float_p(va_list p)
{
	printf("%f", va_arg(p, float));
}
/**
 */
void print_all(const char * const format, ...)
{
	int i = 0; 
	int j = 0;
	va_list p;

	va_start (p, format);

	data *ops = {
		{"c", char_p},
		{"s", str_p},
		{"d", int_p},
		{"f", float_p},
		{NULL, NULL}
	};

	while (format && format[i++])
	{
		j = 0;
		while (*ops[j++].type)
		{
			if (*ops[j].type == format[i])
			{
				ops[j].f(p);
			}
		}
	}
	va_end(p);
}
