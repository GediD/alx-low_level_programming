#include <stdio.h>

/**
 * main - Entry point of the progrm
 * Description: Prints all single digit numbers of base 10 starting from 0,
 * followed by a new line.
 * Return: 0
 */

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		printf("%d", num);
		num++;
	}
	putchar('\n');
	return (0);
}

