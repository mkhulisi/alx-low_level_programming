#nclude "main.h>
/**
* _isupper - checks if a a character is upper or lower case
* @c: alphaetical character to check
* Return: 1 if upper 0 otherwise
*/
int _isupper(int c)
{

	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
	{
		if (c >= 'a' && c <= 'z')
		{
			return (0);
		}
		else
		{
			return (1);
		}
	}

	else
	{

	}
}
