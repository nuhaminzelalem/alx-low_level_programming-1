#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, and then in uppercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	char al[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i = 0;

	while (i < 52)
	{
		putchar(al[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
