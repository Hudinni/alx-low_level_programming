#include <stdio.h>
/**
 * main - Entry Point
 * print_fibonacci - Prints the first n Fibonacci numbers
 * @n: variable counter
 * Description: program to print first 50 Fibonacci numbers, from 1 & 2
 * Return: always 0
 */
void print_fibonacci(int n);
{
	int fibonacci[n];

	fibonacci[0] = 1;
	fibonacci[1] = 2;

	for (int i = 2; i < n; i++)
	{
		fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
	}
	for (int i = 0; i < n; i++)
	{
		printf("%d", fibonacci[i]);
		if (i != n - 1)
		{
		printf(", ");
		}
	}
	printf("\n");
}
