#include "main.h"


/**
  * print_diagonal - a function that draws a diagonal line on the terminal
  *@n: input number of times to print '\'
  * Return: a diagonal line
  */

void print_diagonal(int n)

{
	int j, i;


	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (j = 1; j <= n; j++)
		{
			for (i = 1; i < j; i++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
