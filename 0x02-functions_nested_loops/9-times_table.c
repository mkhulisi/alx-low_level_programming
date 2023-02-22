#include "main.h"
/**
  *times_table -  prints the 9 times table, starting with 0.
  *Return: void,  nothing
  */
void times_table(void)
{
	int j, y, z, u, d;

	for (j = 0; j <= 9; j++)
	{
		for (y = 0; y <= 9; y++)
		{
			z = j * y;

			if (z > 9)
			{
				u = z % 10;
				d = (z - u) / 10;

				_putchar(44);
				_putchar(32);
				_putchar(d + '0');
				_putchar(u + '0');
			}
			else
			{
				if (y != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}

				_putchar(z + '0');
			}
		}

		_putchar('\n');
	}
}
