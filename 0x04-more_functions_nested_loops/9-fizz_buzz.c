#include "main.h"
#include <stdio.h>

/**
 * main - program that prints the numbers from 1 to 100 (FizzBuzz)
 * Return: 0 is success
 */

int main(void)
{
	int n;

	for (n = 0; n <= 100; n++)
	{
		if (n % 3 == 0 && n % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (n % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", n);
		}
	}
	return (0);
}
