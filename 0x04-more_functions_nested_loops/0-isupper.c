#include "main.h"

/**
 * _isupper - function name
 * @c: character being checked
 * Description: function that checks for uppercase character
 * Return: 0 or 1 is success
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
