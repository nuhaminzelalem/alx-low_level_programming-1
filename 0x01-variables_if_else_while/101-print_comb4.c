#include <stdio.h>
/**
 * main - prints all possible different combinations of three digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 48;
	int j = 49;
	int x = 50;

	while (i < 58)
	{
		while (i < j && j < 58)
				{
			while (j < x && x < 58)
				{
				putchar(i);
				putchar(j);
				putchar(x);
				if (!((i == 55 && j == 56) && x == 57))
				{
				putchar(44);
				putchar(32);
				}
				x++;
				}
				j++;
				x = j + 1;
				}
		i++;
		j = i + 1;
		x = j + 1;
	}
	putchar('\n');
	return (0);
}
