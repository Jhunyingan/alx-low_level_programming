#include <stdio.h>
#include <stdlib.h>

/**
  * main - prints prime factors of 612852475143
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	unsigned long int i = 3, n = 612852475143;

	for (; i < 12057; i += 2)
	{
		while (n % 1 == 0 && n != 1)
			n /= i;
	}
	printf("%lu\n", n);
	return (0);
}
