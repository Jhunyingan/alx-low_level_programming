#include "main.h"
#include <ctype.h>

/**
  * _isupper - a function that checks for uppercase character
  * @c: the int for the paramaters of my function
  * Return: 1 if c is uppercase, otherwise 0
  */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
