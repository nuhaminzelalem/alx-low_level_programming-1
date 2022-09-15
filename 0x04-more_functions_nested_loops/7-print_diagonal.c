#include "main.h"
/**
 * print_diagonal - function that draws a diagonal line on the terminal.
 * @n: input parameter
 * Return: Always 0 (Success)
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= n; j++)
			{
				if (i != j)
					_putchar(' ');
				else
				{
					_putchar(92);
					_putchar('\n');
					break;
				}
			}
		}
	}
	else
		_putchar('\n');
}
