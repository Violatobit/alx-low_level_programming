#include "main.h"

/**
 *_strncpy - Copies an inputted number
 *            of bytes from string src into dest.
 *@dest: The destination string.
 *@src: The source string.
 *@n: The number of bytes.
 *
 *Return: A pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index = 0;

	while (index < n)

	{
		dest[index] = src[index];
			index++;

	}
	return (dest);

}
