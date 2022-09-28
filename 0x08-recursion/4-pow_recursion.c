#include "main.h"

/**
 *_pow_recursion - returns the value raised to a certain value
 *@x: integer base
 *@y: integer power to
 *
 *Return: -1 if y is lower than 0
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	else
	{
		y--;
		return (x *_pow_recursion(x, y));
	}
}
