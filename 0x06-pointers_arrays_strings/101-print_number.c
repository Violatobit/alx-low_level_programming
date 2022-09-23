#include "main.h"
#include <stdio.h>

/**
 *print_number - Print an integer using _putchar
 *@n: integer to be printed
 */
void print_number(int n)
{
	int i;
	int j;
	int k;

	j = 0;
	i = 1;
	k = n;
	if (n < 0)
	{
		_putchar('-');
		j = 1;
	}
	while (k > 9 || k < -9)
	{
		i *= 10;
		k /= 10;
	}
	while (i > 0)
	{
		if (i > 9)
		{
			if (!j)
				_putchar((n / i % 10) + '0');
			else
				_putchar((n / i % 10) * -1 + '0');
			i /= 10;
		}
		if (i == 1)
		{
			if (j)
				_putchar((n % 10) * -1 + '0');
			else
				_putchar(n % 10 + '0');
			i = 0;
		}

	}
}
