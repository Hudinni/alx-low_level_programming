#include <stdio.h>
/**
  * main - entry point
  * Description: program that prints base 16 numbers in lowercase
  * Return: always 0 (success)
  */
int main(void)
{
	int n;
	int m;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	for (n = 97; n <= 102; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
