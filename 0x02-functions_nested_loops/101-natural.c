#include "main.h"

/**
 * main - Entry point
 * Description:  program to print sum of all the multiples of 3 or 5 below 1024
 * Return: Always 0
 */
int main(void)
{
	int sum = 0;

	for (int i = 0; i < 1024; i++)
	{
	if (i % 3 == 0 || i % 5 == 0)
		sum += i;
	}

	char digits[10];
	int length = 0;
	int tempSum = sum;

	if (tempSum == 0)
	{
		digits[length] = '0';
		length++;
	}
	else
	{
		while (tempSum > 0)
		{
			digits[length] = (tempSum % 10) + '0';
			tempSum /= 10;
			length++;
		}
	}

	for (int i = length - 1; i >= 0; i--)
	_putchar(digits[i]);
	_putchar('\n');

	return (0);
}
