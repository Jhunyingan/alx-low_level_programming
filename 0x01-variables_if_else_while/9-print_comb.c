#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints numbers from 0 to 9seperated by a comma followed by a space
 *
 * Return: Always 0 (Success)
 */

int mai(void)
{
	int num = '0';

	while (num <= '9')
	{
		putchar(num);
		if (num != '9')
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}
	putchar('\n');
	return (0);
}
