#include <stdio.h>
/**
  * main - Entry point
  * Description: Print combinations of two different digits ascending in order
  * Return: Always 0 (success)
  */

int main(void)
{
	int n, m;

	for (n = 0; n < 9; n++)
	{
		for (m = n + 1; m < 10; m++)
		{
			putchar(n + '0');
			putchar(m + '0');

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
