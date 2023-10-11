#include "function_pointers.h"

/**
 * print_name - a function that prints a name
 * @name: string name to be printed
 * @f: function to print name
 */

void print_name(char *name, void (*f)(char *))
{
if (f != NULL)
	f(name);
}
