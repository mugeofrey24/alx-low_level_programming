#include "function_pointers.h"

/**
 * print_name - function
 * @name: string
 * @f: pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
