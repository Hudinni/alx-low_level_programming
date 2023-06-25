#include "main.h"
/**
  * _isalpha - Function Entry point
  * Description:  To check if character is alphabet
  * @c: ACSII code character being checked
  * Return: 1 if alphabet, 0 otherwise
  */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
