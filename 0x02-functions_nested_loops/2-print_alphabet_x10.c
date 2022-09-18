#include "main.h"

/**
 *  print_alphabet_x10 - print lowercase alphabet 10 times
 *
 * Return: void
 *
 */
void print_alphabet_x10(void)
{
	int a = 97;
	int z = 122;
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = a; i <= z; i++)
		{
			_putchar(i);
		}
	_putchar('\n');
	}
}
