#include "main.h"
/**
 * print_triangle - function that prints a triangle, followed by a new line.
 * @size: is the input parameter
 * Return: Always 0 (Success)
 */
void print_triangle(int size)
{
	int i;
	int j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				if ((i + j) >= (size + 1))
					_putchar(35);
				else
					_putchar(32);
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
