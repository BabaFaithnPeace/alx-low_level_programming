#include <stdio.h>

/**
  * main - is starting point for program execution
  *
  * Return: ends fn execution and returns control to calling fn
  * fn means function
  */
int main(void)
{
	int i;
	char j;

	for (i = 0; i < 10; i++)
		putchar(i + '0');
	for (j = 'a'; j <= 'f'; j++)
		putchar(j);
	putchar('\n');
	return (0);
}
