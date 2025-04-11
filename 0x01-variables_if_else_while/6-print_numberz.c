#include <stdio.h>

/**
 * main - Entry point of the program
 * Description: Prints all single digit numbers of base 10 starting from 0,
 * followed by a new line.
 * It is not allowed to use any variable of type char. And only the putchar
 * function is used.
 * Return: 0
 */

int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar('0' + n);
		n++;
	}
	
	putchar('\n');

	return (0);
}
