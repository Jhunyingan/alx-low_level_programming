#include "main.h"

/**
  * print_number - Function that prints an integer.
  * @n: int type number
  * Description: Can only use _putchar to print.
  */

void print_number(int n)
{
	long m;
	long c;
	long num;

	num = n;
	/* negatives */
	if (num < 0)


	{
		num *= -1;
		_putchar('-');
	}

	m = 1;
	c = 1;
	while (c)
	{
		if (num / (m * 10) > 0)
			m *= 10;
		else
			c = 0;
	}

	while (num >= 0)
	{
		if (m == 1)
		{
			_putchar(num % 10 + '0');
			num = -1;
		}
		else
		{
			_putchar((num / m % 10) + '0');
			m /= 10;
		}
	}
}
