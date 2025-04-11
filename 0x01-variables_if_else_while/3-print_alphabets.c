#include <stdio.h>

/**
 * main - Entry point of the program
 * Description: Prints the alphabet in lowercase, and then in uppercase,
 * followed by a new line.
 * Return: 0
 */

int main(void)
{
	char lowercase = 'a';
	char uppercase = 'A';

	while (lowercase < 123)
	{
		putchar(lowercase);
		lowercase++;
	}
	while (uppercase < 91)
	{
		putchar(uppercase);
		uppercase++;
	}
	putchar('\n');
	return (0);
}
