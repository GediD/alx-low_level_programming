#include <stdio.h>

/**
 * main -Entry point of the program
 * Description: Prints the lowercase alphabet in reverse,
 * followed by a new line.
 * Return: 0
 */

int main(void)
{
	int n = 25;

	while (n >= 0)
	{
		putchar('a' + n);
		n--;
	}
	putchar('\n');

	return (0);
}
