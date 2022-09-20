#include "main.h"

/**
 *rev_string - Prints a string in reverse.
 *@s: Reverse string to be printed.
 */
void rev_string(char *s)
{
	int length = 0;
	int index = 0;

	while (s[index++])
	{
		length++;
	}
	for (index = length - 1; index >= 0; index--)
	{

		_putchar(s[index]);

	}

}
