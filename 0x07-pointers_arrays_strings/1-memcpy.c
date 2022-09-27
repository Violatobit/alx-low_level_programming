#include "main.h"

/**
 *_memcpy - copies memory area
 *@n: bytes
 *@src: memory area to copy
 *@dest: memory area to be copied to
 *
 *Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}





}
