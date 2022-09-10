#include <stdio.h>
/**
 * main -  prints all possible different combinations of two digi
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 48;
	int j = 49;

	while (i < 58 && j < 58)
	{
		while (i < j)
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
		i++;
	}
	putchar('\n');
	return (0);
}
