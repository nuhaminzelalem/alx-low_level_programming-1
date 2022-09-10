#include <stdio.h>
/**
 * main -  prints all possible different combinations of two digi
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 48;

	while (i < 58)
	{
		int j = 49;

		while (i < j && j < 58)
		{
			putchar(i);
			putchar(j);
			if (i != 56 && j != 57)
			{
				putchar(44);
				putchar(32);
			}
			j++;
		}
		j = 49;
		i++;
	}
	putchar('\n');
	return (0);
}
