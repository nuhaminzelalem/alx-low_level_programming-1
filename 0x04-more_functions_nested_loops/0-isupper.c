#include "main.h"
/**
 * _isupper - function that checks for uppercase character.
 * @c: input parameter
 * Return: Always 0 (Success)
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		_putchar(c);
		return (1);
	}
	else
		return (0);
}
