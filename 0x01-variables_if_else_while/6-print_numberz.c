#include <stdio.h>

/**
  * main - is the starting point for program execution
  *
  * Return: ends fn execution and returns control to calling fn
  * fn means function
  */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar(i + '0');
	putchar('\n');
	return (0);
}
