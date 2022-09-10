#include <stdio.h>
/*
 * main - prints lower case and upper case alphabet
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alph_low_upper[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i = 0;

	while (i < 52)
	{
		putchar(alph_low_upper[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
