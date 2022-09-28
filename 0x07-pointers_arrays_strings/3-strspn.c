#include "main.h"

/**
 *_strspn - gets the length of a prefix substring.
 *@s: pointer to string
 *@accept: pointer to string
 *
 *Return: number of bytes in s with bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;
	unsigned int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}
		if (s[i] != accept[j])
		{
			break;
		}
	}	
		return (count);
}
