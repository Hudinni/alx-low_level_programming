#include <stdio.h>
/**
 * main - Entry Point
 * Description: program to print all lowercase alphabets in revers
 * Return: always 0 (success)
 */
int main(void)
{
	int n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
