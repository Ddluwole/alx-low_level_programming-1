#include "main.h"
#include <stdio.h>

/**
 * main - prints the number from 1 to 100cfollowed by a new line
 * but for the multiples of three prints Fizz instead of the number
 * and for the multiples of five prints Buzz
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

		for (i = 1; i <= 100; i++)
		{
			if(i % 3 ==0 && i %5 != 0)
			{
				printf("Fizz");
			}
			else if(i % 5 ==0 && i % 3 != 0)
			{
				printf("Buzz");
			}
			else if (i % 3 == 0 && i % 5 == 0)
			{
				printf("FizzBuzz");
			}
			else if (i == 1);
		}
	else if
	{
		printf("%d", i);
	}
	else if
	{
		printf("%d", i);
	}
	printf("\n");

		return (0);
}

