#include "main.h"

/**
 *puts2 - print character of string starting with first character
 *@mystr: The string with characters
 */
void puts2(char *mystr)
{
	int index = 0, len = 0;

	while (mystr[index++])
	{
		len++;
	}
	for (index = 0; index <= len; index += 2)
	{
		_putchar(mystr[index]);
	}

	_putchar('\n');
}
