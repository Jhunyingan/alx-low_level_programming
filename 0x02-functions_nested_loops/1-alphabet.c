#include <stdio.h>
#include <stdlib.h>

/**
  * print_alphabet - Entry point
  *
  * Return: 0
  */

void print_alphabet(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
}
