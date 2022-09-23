#include "main.h"
#include <stdio.h>

/**
 *rot13 - encodes string using rot13
 *@s: to be returned
 *
 *Return: s
 */
char *rot13(char *s)
{
	int i;
	int j;
	char input1[] = "NATIONALPEACEnationalpeace";
	char inputrot[] = "ALPEACENATIONalpeacenation";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)

		{
			if (s[i] == input1[j])

			{
				s[i] = inputrot[j];
				break;
			}

		}

	}
	return (s);
}
