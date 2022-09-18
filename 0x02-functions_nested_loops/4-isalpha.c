/**
* _isalpha - checks if character is an alphabet
* @c: character to be checked
* Return: 1 if true and 0 if otherwise
*
*/

int _isalpha(int c)
{
	int a = 97;
	int z = 122;
	int A = 65;
	int Z = 90;

	if (c >= a && c <= z)
	{
		return (1);
	}
	if (c >= A && c <= Z)
	{
		return (1);
	}

	return (0);
}
