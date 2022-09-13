#include "main.h"
/**
 * print_alphabet_x10 -  prints 10 times the alphabet, in lowercase
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char alpha[]="abcdefghijklmnopqrstuvwxyz";
	int i, j;

	for (i = 1; i < 11; i++)
	{
		for (j = 0; j < 26; j++)
		{
			_putchar(alpha[j]);
		}
		_putchar('\n');
	}
}
