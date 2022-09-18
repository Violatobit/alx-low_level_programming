#include "main.h"

/**
 * print_sign - prints sign of a number
 * @n: number to check sign
 *
 * Return: 1 if positive, 0 if zero and -1 if negative
 */


int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}

	return (0);
}
