#include "main.h"

/**
 *puts2 - print character of string starting with first character
 *@mystr: The string with characters
 */
void puts2(char *mystr)
{
	int i;

	for (i = 0; mystr[i] != '\0'; ++i);
	{
		if (i % 2 == 0)
			_putchar(mystr[i]);
	}
	_putchar('\n');
	}
}
