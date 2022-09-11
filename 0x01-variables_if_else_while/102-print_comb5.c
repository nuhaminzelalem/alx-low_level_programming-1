#include <stdio.h>
/**
 * main - prints all possible combinations of two two-digit numbers.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, x, y, di1, di2;

	i = j = x = y = 48;

	while (i < 58)
	{
		j = 48;
		while (j < 58)
		{
			x = 48;
			while (x < 58)
			{
				y = 48;
				while (y < 58)
				{
				di1 = (i * 10) + j;
				di2 = (x * 10) + y;
				if (di1 < di2)
				{
					putchar(i);
					putchar(j);
					putchar(32);
					putchar(x);
					putchar(y);
					if (!(i == 57 && j == 56 && x == 57 && y == 57))
					{
						putchar(44);
						putchar(32);
					}
				}
				y++;
				}
				x++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
