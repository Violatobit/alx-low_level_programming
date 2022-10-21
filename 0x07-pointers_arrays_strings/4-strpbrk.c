#include "main.h"

/**
 *_strpbrk - searches a string for any of a set of bytes
 *@s:  first occurrence in the string
 *@accept: string to find in bytes
 *
 * Return: a pointer to the byte in s that matches accept,
 *       or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if accept[j]
			return (s + i);
	}
	return (0);
}
