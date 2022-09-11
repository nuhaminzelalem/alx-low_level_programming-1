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
	int y = 49;

	while (i < 58)
	{
		while (j < 57)
		{
			while (x < 58)
			{
				while (y < 58)
				{
				putchar(i);
				putchar(j);
				putchar(32);
				putchar(x);
				putchar(y);
				if (!(i == 57 && j == 56))
				{
					putchar(44);
				}
				y++;
				}
				x++;
				y = 48;
			}
			j++;
			x = 48;
			y = 48;
		}
		i++;
		x = 48;
		y = 48;
		j = 48;
	}
	putchar('\n');
	return (0);
}

