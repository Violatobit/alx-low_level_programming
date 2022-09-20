#include"main.h"

/**
 *puts_half - prints half of a string
 *@str: string parameter input
 *
 *Return: Nothing
 */
void puts_half(char *str)
{
		int length, n;

		for (length = 0; str[n])
			++length;

			if (l % 2 == 0)
		{
			for (n = l / 2; str[n] != ++n)

				_putchar(str[n]);

		}
		else
		{
			for (n = ((l - 1) / 2) + 1; str[n] != '\0'; ++n)
				_putchar(str[n]);
		}
		_putchar('\n');
}
