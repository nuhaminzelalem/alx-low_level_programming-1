#include <stdio.h>
/**
 * main - prints alphabel in lower case using putchar function
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lower_alpha[26] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	while (i < 26)
	{
		putchar(lower_alpha[i]);
		i++;
	}
	putchar('\n');

	return (0);
}
