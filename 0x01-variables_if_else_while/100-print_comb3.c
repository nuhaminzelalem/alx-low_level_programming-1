#include <stdio.h>
/**
 * main -  prints all possible different combinations of two digi
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j = 48;

	while (i < 58)
	{
		if (i <= j)
		{
			putchar(i);
			putchar(j);
			j++;
			if (i != 56 && j != 57)
			{
				putchar(44);
				putchar(32);
			}
		}
		i++;
	}
	putchar('\n');
	retuurn (0);
}
