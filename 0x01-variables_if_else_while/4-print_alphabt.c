#include <stdio.h>
/**
  * main - Starting point
  * Description: progroams that print lowercase alphabets except e and q
  * Return: always 0 (success)
  */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		if (n == 101 || n == 113)
		{	n++;
			continue;
		}
		putchar (n);
		n++;
	}
	putchar('\n');
	return(0);
}
