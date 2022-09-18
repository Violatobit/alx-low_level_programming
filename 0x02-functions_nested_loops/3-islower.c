/**
 *  _islower - checks if character is a lowercase alphabet
 *  @c: character to be checked
 *
 * Return: 1 if successful. Otherwise return 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}

	return (0);
}
