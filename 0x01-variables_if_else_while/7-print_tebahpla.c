#include <stdio.h>

/**
  * main - is starting point for program execution
  *
  * Return: ends fn execution and returns control to calling fn
  * fn means function
  */
int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);
	return (0);
	putchar('\n');
}
