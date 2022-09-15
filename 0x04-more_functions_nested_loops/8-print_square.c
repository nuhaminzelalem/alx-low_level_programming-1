#include "main.h"
/**
 * print_square - function that prints a square,
 * @siz: input parameter
 * Return: Always 0 (Success)
 */
void print_square(int siz)
{
	int i;
	int j;

	if (i > 0)
	{
		for (i = 1; i <= siz; i++)
		{
			for (j = 1; j <= siz; j++)
			{
				_putchar(35);
			}
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
