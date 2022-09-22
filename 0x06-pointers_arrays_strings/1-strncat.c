#include "main.h"
/**
 *_strncat -concatenate two strings with n bytes
 * @dest: destination string
 * @src: source string
 * @n: number of bytes
 *
 *  Return: a character pointer , dest
 */
char *_strncat(char *dest, char *src, int n)
{

	int dest_length = 0;
	int dest_index = 0;
	int src_index = 0;

	while (dest[dest_index++])
	{
		dest_length++;
	}

	while (src_index < n)
	{
		dest[dest_length++] = src[src_index++];
	}

	return (dest);

}
