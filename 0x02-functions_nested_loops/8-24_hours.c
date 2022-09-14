#include "main.h"
/**
 * jack_bauer - unction that prints every minute of the day of Jack Bauer
 * Return: Always 0 (Success)
 */
void jack_bauer(void)
{
	int i, j, x, y;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (i == 2 && j > 3)
				continue;
			for (x = 0; x < 6; x++)
			{
				for (y = 0; y <= 9; y++)
				{
					_putchar(i + '0');
					_putchar(j + '0');
					_putchar(':');
					_putchar(x + '0');
					_putchar(y + '0');
					_putchar('\n');
				}
			}
		}
	}
}
