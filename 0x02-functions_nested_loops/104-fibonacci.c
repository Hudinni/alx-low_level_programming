#include <stdio.h>
/**
 * main - Entry point
 * Description: program that finds and prints the first 98 Fibonacci numbers
 * starting with 1 and 2
 * Return: always 0
 */
#include <stdio.h>

int main(void)
{
	int n;
	unsigned int fib1 = 1;
	unsigned int fib2 = 2;
	unsigned int fibn;

	printf("%u, %u, ", fib1, fib2);
	for (n = 3; n <= 98; n++)
	{
		fibn = fib1 + fib2;
		printf("%u", fibn);
		if (n < 98)
		{
			printf(", ");
		}
		fib1 = fib2;
		fib2 = fibn;
	}
	printf("\n");
	return (0);
}
