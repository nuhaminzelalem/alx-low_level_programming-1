#include <stdio.h>
/**
 * main - prints all possible combinations of two two-digit numbers.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 48;
	int j = 48;
	int x = 48;
	int y = 48;

	while (i < 58)
	{
		j = 48;

		while (j < 57)
		{
			x = 48;

			while (x < 58)
			{
				y = 48;

				while (y < 58)
				{
					if ((i+j) < (x+y))
					{
				putchar(i);
				putchar(j);
				putchar(32);
				putchar(x);
				putchar(y);
					}
				if (!(i == 57 && j == 56 && x ==57 && y == 57))
				{
					putchar(44);
					putchar(32);
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
