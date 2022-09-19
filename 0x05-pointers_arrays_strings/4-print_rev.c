#include "main.h"

/**
 *print_rev - Prints a string in reverse.
 *@mystr: The string to be printed.
 */
void print_rev(char *mystr)
{
	int length = 0;
	int index = 0;

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
