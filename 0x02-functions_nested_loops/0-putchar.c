#include "main.h"
/**
 * main - prints _putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
char word[] = "_putchar";
	int i;

	for (i = 0; i < 8 ; i++)
	{
<<<<<<< HEAD
		_putchar(word[i]);
=======
		_putchar('word[i]');
>>>>>>> d5147f48088e96f675831df8f2161401247d8f9d
	}
	_putchar('\n');
	return (0);
}
