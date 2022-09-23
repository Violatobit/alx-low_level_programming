#include "main.h"

/**
 *cap_string - capitalize all words of a string
 *@str: string
 *Return: `str`
 */
char *cap_string(char *str)
{
	int i, c;
	int generate;
	char nons[] = ",;.!?(){}\n\t\" ";

	for (i = 0, generate = 0; str[i] != '\0'; i++)
	{

		if (str[0] > 96 && str[0] < 123)
			generate = 1;

		for (c = 0; nons[c] != '\0'; c++)

		{
			if (nons[c] == str[i])
			generate = 1;

		}
		if (generate)

		{
			if (str[i] > 96 && str[i] < 123)

			{
			str[i] -= 32;
			generate = 0;
			}

			else if (str[i] > 64 && str[i] < 91)
				generate = 0;
			else if (str[i] > 47 && str[i] < 58)
				generate = 0;

		}

	}
	return (str);
}
