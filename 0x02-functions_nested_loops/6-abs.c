#include "main.h"
/**
 * _abs -  function that computes the absolute value of an integer.
 * Return: Always 0 (Success)
 */
int _abs(int a)
{
int abso;

if (a >= 0)
{
	abso = a;
	return (abso);
}
else
{
	abso = -1*a;
	return (abso);
}
}
