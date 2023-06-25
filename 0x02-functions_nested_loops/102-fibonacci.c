#include <stdio.h>
/**
 * print_fibonacci - Prints the first n Fibonacci numbers
 * @n: variable counter
 * Description: program to print first 50 Fibonacci numbers, from 1 & 2
 * Return: always 0
 */
void print_fibonacci(int n)
{
	int fibonacci[50];

	fibonacci[0] = 1;
	fibonacci[1] = 2;

	int i;

	for (i = 2; i < n && i < 50; i++)
	{
		fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
	}

	int j;

	for (j = 0; j < i; j++)
	{
		printf("%d", fibonacci[j]);
		if (j != i - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
