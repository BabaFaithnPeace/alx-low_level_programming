#include <stdio.h>

/**
  * main - is the starting point for project execution
  *
  * Return: ends fn execution and returns control to caling fn
  * fn means function
  */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
