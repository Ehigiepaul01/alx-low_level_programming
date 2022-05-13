#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name to print
 * @f: pointer to the printing function
 */
int main(void)
{
	print_name("Paul", print_name_as_is);
	print_name("Paul Ehigie", print-name_uppercase);
	printf("/n");
	return(0);
}
