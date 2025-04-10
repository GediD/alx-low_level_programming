#include <stdio.h>

/**
 * main - Entry point of the program
 * Description: Prints the alphabet in lowercase, followed by a new line.
 * Return: 0
 */

int main(void)
{
	char lower_alphabet = 'a';

	while (lower_alphabet < 123)
	{
		putchar(lower_alphabet);
		lower_alphabet++;
	}
	putchar('\n');
	return (0);
}
