#include "main.h"

/**
 *rev_string - Prints a string in reverse.
 *@mystr: Reverse string to be printed.
 */
void rev_string(char *mystr)
{
	int length = 0;
	int index = 0;

	while (mystr[index++])
	{
		length++;
	}
	for (index = length - 1; index >= 0; index--)
	{

		_putchar(mystr[index]);

	}

}
