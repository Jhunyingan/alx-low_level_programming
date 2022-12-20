#include <stdio.h>

/**
  * print_array - entry point
  * @a: holds first value
  * @n: holds second value
  */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i > 0)
		{
			printf(", ");
		}
		printf("%d", a[i]);
		i++;
	}
	printf("\n");
}
