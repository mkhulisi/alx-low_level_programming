/**
*_strlen - get the length of a string
*@s: poiter parameter containing string
*Return: an integer which is the lenght of the string at *a
*/
int _strlen(char *s)
{

	int l;

	l = 0;

	while (*s != '\0')
	{
		l++;
		p++;
	}

	return (l);
}
