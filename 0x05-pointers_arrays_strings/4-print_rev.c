#include "main.h"

/**
 *print_rev - Prints a string in reverse.
 *@mystr: The string to be printed.
 */
void print_rev(char *mystr)
{
	size_t length = 0;
	size_t index = 0;

	while (mystr[index++])
	{
		length++;
	}
	for (index = length - 1; index > 0; index--)
	{

		_putchar(mystr[index]);

	}
	_putchar('\n');
}
