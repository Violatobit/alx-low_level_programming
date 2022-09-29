#include "main.h"

/**
 *_print_rev_recursion - pints a strin in reverse
 *@s: sting to be  printed
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		s--;
	}
	else
	{
		_print_rev_recursion(++s);
		s--;
		_putchar(*s);
	}
}
