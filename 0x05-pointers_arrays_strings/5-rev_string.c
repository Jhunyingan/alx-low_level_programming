#include <stdio.h>
#include <string.h>

/**
  * rev_string - prints reverse string as the name implies
  *
  * @s: contains the value of the string
  */

void rev_string(char *s)
{
	int len = strlen(s);
	int middle = len / 2;
	char temp;
	int i = 0;

	while (i < middle)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
		i++;
	}
}
