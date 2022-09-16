#include <unistd.h>

/**
 *_putchar - Prints a character to the standard output.
 *@c: character to print
 *
 * Return: 1 when successful 
 * and -1 when failed.
 */
int _putchar(char c)
{

return (write(1, &c, 1));

}
