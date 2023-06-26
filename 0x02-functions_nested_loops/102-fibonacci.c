#include <stdio.h>
/**
 * main - Entry point
 * Description: program to print first 50 Fibonacci numbers, from 1 & 2
 * Return: always 0
 */
int main(void)
{
	int n;

	unsigned long fibo1 = 0, fibo2 = 1, sum;

	for (n = 0; n < 50; n++)
	{
		sum = fibo1 + fibo2;
		printf("%lu", sum);

		fibo1 = fibo2;
		fibo2 = sum;

		if (n == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
