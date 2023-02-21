#ifdef main
#define main
/**
 * print_alphabet - function prototype
 * prints alphabets in lower case
 * Return: void
 */
void print_alphabet(void)
{
        int x;

        for (x = 'a'; x <= 'z'; x++)
        {
                putchar(x);
        }

        putchar('\n');
}

#endif
