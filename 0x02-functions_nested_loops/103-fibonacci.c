#include <stdio.h>
/**
 * main - Entry point
 * Description: program that finds and prints the sum
 * of the even-valued terms of the Fibonacci code
 * followed by a new line
 * Return: always 0
 */

int main(void)
{
	int firstnum = 1;
	int secondnum = 2;
	int sum = 0;
	int evenSum = 2;

	while (sum <= 4000000)
	{
	sum = firstnum + secondnum;
	if (sum % 2 == 0)
	{
		evenSum += sum;
	}
	firstnum = secondnum;
	secondnum = sum;
	}
	printf("%d\n", evenSum);
	return (0);
}
