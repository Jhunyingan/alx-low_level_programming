#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MIN_PASS_LENGTH 8
#define MAX_PASS_LENGTH 16

int main(void)
{
	srand(time(NULL));

	int pass_length = MIN_PASS_LENGTH + (rand() % (MAX_PASS_LENGTH - MIN_PASS_LENGTH + 1));
	char password[pass_length + 1];

	int i= 0;
	while (i < pass_length)
	{
		char c = (rand() % 94) + 33;
		if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || c == '!' || c == '@' || c == '#' || c == '$' || c == '%' || c == '^' || c == '&' || c == '*' || c == '(' || c == ')' || c == '-' || c == '_' || c == '+' || c == '=' || c == '{' || c == '}' || c == '[' || c == ']' || c == '|' || c == '\' || c == ':' || c == ';' || c == '"' || c == '<' || c == '>' || c == '?' || c == ',' || c == '.' || c == '/' || c == '~')
		{
			password[i] = c;
			i++;
		}
	}
	password[pass_length] = '\0';
	printf("Generated password: %s\n", password);
	return (0);
}
