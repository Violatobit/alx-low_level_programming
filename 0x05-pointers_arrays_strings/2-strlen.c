#include "main.h"

/**
 *_strlen - Returns the length of a string.
 *@s: The string to get the length of.
 *
 *Return: length.
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;


	return (length);

}
