#include <stdio.h>
/**
 * main - a program that prints the numbers from 1 to 100, followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)

{

	int i;
	int x_3;
	int x_5;

	for (i = 1; i <= 100; i++)
	{
		x_3 = i % 3;
		x_5 = i % 5;

		if ((i >= 3 && x_3 == 0) || (i >= 5 && x_5 == 0))
		{
			if(x_3 == 0 && x_5 == 0)
				printf("FizzBuzz");
			else if (x_3 == 0)
				printf("Fizz");
			else
				printf("Buzz");
			if (i != 100)
				printf(" ");
		}
		else
		{
			printf("%d", i);
			if (i != 100)
				printf(" ");
		}
	}
	printf("\n");
	return (0);
}
