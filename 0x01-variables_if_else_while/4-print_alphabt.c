#include <stdio.h>

/**
  * main - starting point for program execution
  *
  * Return: ends exection and returns control to calling function
  */

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		if (i != 'q' && i != 'e')
			putchar(i);
	putchar('\n');
	return (0);
}
