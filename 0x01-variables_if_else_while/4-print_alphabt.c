#include <stdio.h>
/**
 * main - Print all the letters except q and e
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha_low[26]
	int i = 0;

	while (i < 26)
	{
		if (alpha[i] != 'e' && alpha[i] != 'q')
		{
			putchar(alpha[i]);
			i++;
		}
	}
	putchar('\n');
	return (0);
}

