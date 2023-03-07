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
		if (i == 9)
			putchar(i + '0');
		else
		{
			putchar(i + '0');
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
