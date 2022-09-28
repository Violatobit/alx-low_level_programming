#include "main.h"

/**
 *factorial - returns the factorial of a given number
 *@n: factorial to be checked
 *
 *Return: -1 if n is lower than 0, and otherwise
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
