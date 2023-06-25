#include "main.h"
/**
  * print_last_digit - Function Entry Point
  * Description: function that prints the last digit of a number
  * @n: value being checked
  * Return: value of last didgit
  */
int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
	{
	last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
