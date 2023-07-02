#include "main.h"

/**
 * _isdigit - function name
 * @c: character being checked
 * Description: function that checks for a digit (0 through 9)
 * Return: 0 or 1 is success
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
