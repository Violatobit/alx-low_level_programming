#include "main.h"

/**
*_strcmp - compares two strings
*@s1: first string to be compared.
*@s2: second string to be compared.
*
*Return: If str1 == str2, 0
*        If str1 > str2, 2
*        If str1 < str2, -2
*/
int _strcmp(char *s1, char *s2)
{

	int s1_length = 0;
	int i = 0;
	int n = 0;

	while (s1[i++])
	{
		s1_length++;
	}
	for (n = 0; n < s1_length; n++)
	{
		if (s1[n] == s2[n])
		{
			return (0);
		}
		if (s1[n] > s2[n])
		{
			return (2);
		}
		if (s1[n] < s2[n])
		{
			return (-2);
		}
	}
	return (0);
}
