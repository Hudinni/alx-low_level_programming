#include <stdio.h>
/**
 * main - Entry point
 * Description: program that finds and prints the first 98 Fibonacci numbers
 * starting with 1 and 2
 * Return: always 0
 */
#include <stdio.h>
#include <string.h>

int main(void)
{
	int n;
	unsigned int fibo1 = 1;
	unsigned int fibo2 = 2;
	unsigned int fibo_next;
	char fibo_string[1244] = "";
	char temp_string[13];

	sprintf(fibo_string, "%u, %u, ", fibo1, fibo2);
	for (n = 3; n <= 98; n++)
	{
		fibo_next = fibo1 + fibo2;
		sprintf(temp_string, "%012u", fibo_next);
		strcat(fibo_string, temp_string);
		if (n < 98)
		{
			strcat(fibo_string, ", ");
		}
		fibo1 = fibo2;
		fibo2 = fibo_next;
	}
	printf("%s\n", fibo_string);
	return (0);
}
