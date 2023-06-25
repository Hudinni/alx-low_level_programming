#include "main.h"
/**
  * _abs - Function Entry Point
  * @n: character being computed
  * Description: function that computes the absolute value of an integer
  * Return: 0 is success
  */
int _abs(int n)
{

	if (n < 0)
	{
		int abs_val;

		abs_val = n * -1;
		return (abs_val);
	}
	return (n);
}
