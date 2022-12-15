#include "main.h"

/**
  * print_square - a function that prints a square, followed by a new line
  * @size: of both width and length
  * Return: a square made of '#'
  */

void print_square(int size)
{
	int j, i;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (j = 1; j <= size; j++)
		{
			_putchar('#');
			for (i = 2; i <= size; i++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
