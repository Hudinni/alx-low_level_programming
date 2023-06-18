#include <stdio.h>
/**
  * main - starting point
  * Description: Program to print single digit numbers of base 10
  * Return: alaways 0 (succcess)
  */
int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		printf("%d", n);
		n++;
	}
	printf("\n");
	return (0);
}
