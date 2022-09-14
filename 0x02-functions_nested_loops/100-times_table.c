#include "main.h"
/**
 * print_times_table - prints the n times table, starting with 0.
 * @n: input parameter
 * Return: Always 0 (Success)
 */
void print_times_table(int n)
{
	int i, j, mul;

	if (n > 15 || n < 0)
	{
		return;
	}
	else
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				mul = i * j;
				if (mul <= 9)
				{
					if (mul ==0)
					{
						_putchar('0');
						_putchar(',');
						_putchar(' ');
					else
					{
						_putchar(' ');
						_putchar(mul % 10 + '0');
					}
					if (j == n)
						continue;
					_putchar(',');
					_putchar(' ');
				}
				else
				{
					_putchar(mul / 10 + '0');
					_putchar(mul % 10 + '0');
					if (j == n)
						continue;
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
