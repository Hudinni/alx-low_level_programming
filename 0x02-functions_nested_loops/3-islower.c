#include "main.h"
/**
  * _islower - Function Entry Point
  * Description: check if the given character is a lowercase
  * @c: character is ACSII code
  * Return: 1 if Lowercase character, 0 otherwise.
  */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
