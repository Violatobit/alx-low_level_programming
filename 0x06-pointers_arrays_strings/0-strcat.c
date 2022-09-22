#include "main.h"
/**
 *_strcat -concatenate two strings
 * @dest: destination string
 * @src: source string
 *
 *  Return: a character pointer , dest
 */
char *_strcat(char *dest, char *src)
{

	int dest_length = 0;
	int dest_index = 0;
	int src_index = 0;

	while (dest[dest_index++])
	{
		dest_length++;
	}

	while (src[src_index++])
	{
		dest[dest_length++] = src[src_index - 1];
	}

	return (dest);

}
