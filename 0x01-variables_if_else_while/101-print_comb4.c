#include <stdio.h>
/**
  * main - Entry point
  * Decription: program that prints different combinations of three digits
  * Return: Always 0 (success)
  */
int main(void)
{
	int n, m, o;

	for (n = 0; n < 8; n++)
	{
		for (m = n + 1; m < 9; m++)
		{
			for (o = m + 1; o < 10; o++)
			{
				putchar(n + 48);
				putchar(m + 48);
				putchar(o + 48);

				if (n == 7 && m == 8 && o == 9)
				{
					continue;
				}

				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
