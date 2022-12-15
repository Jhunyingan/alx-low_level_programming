#include "main.h"

/**
  * print_triangle - a function that prints a triangle
  * @size: size of the triangle
  * Return: triangle of '#'s
  */

void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (j = 0; j <= (size - 1); j++)
		{
			for (i = 0; i < (size - 1) - j; i++)
			{
				_putchar(' ');
			}
			for (k = 0; k <= j; k++)

			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
