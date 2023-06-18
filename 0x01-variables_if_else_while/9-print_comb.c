#include <stdio.h>
/**
  * main - Entry point
  * Description: program to print single-digit numbers separated by ,
  * Return: always 0 (success)
  */
int main(void)
{
	int n;
	int m = 44;
	int p = 32;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		if (n == 57)
		{
			continue;
		}
		putchar(m);
		putchar(p);
	}
	putchar('\n');
	return (0);
}
