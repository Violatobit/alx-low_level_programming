#include"main.h"

/**
 *puts_half - prints half of a string
 *@str: string parameter input
 *
 *Return: Nothing
 */
void puts_half(char *str)
{
		int length, n = 0;

		for (length = 0; str[n]; ++length)

		{
			_putchar(str[n]);

		}
			for (n = 1 / 2; str[n] <= n; ++n)

		{
			_putchar(str[n]);
		}
		_putchar('\n');

}
