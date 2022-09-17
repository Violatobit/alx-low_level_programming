#include "main.h"

/**
 * print_alphabet - prints lowercase alphabet
 *
 * Return: void
 */
void print_alphabet(void)
{
	int a;
	int z = 122;

	for (a = 97; a <= z; a++)
	{
		_putchar(a);
	}

	_putchar('\n');

}

/**
 * main - entry point of program
 * Return: 0 if successful
 */
int main(void)
{
	print_alphabet();
	return (0);
}
