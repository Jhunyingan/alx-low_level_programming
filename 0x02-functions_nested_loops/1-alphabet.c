#include <stdio.h>

/**
  * main - Entry Point
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
