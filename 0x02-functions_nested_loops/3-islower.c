#include "main.h"
/**
 * _islower - it checks for lowercase character
 * @c: is the parameter
 * Return: Always 0 (Success)
 */
int _islower(int c)
{

if (c > 'a' && c < 'z')
{
	return (1);
}
else
{
	return (0);
}
}
