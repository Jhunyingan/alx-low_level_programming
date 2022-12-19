#include "main.h"
#include <stdio.h>

/**
  * swap_int - a function to swap the value of two integers
  * @a: value of first integer given
  * @b: value of the second integer given
  * int c: addressed the swapped value
  * Return: Always 0 (Success)
  */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
