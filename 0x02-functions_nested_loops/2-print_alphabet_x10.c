#include "main.h"
/**
  * print_alphabet_x10 - Entry Point
  * Description: function that prints 10x alphabet, in lowercase
  * Return: Always 0 (success)
  */
void print_alphabet_x10(void)
{
	char ch;
	int i = 0;

	while (i < 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
		i++;
	}
}
