#include <stdio.h>

/**
 * main - Entry point ofthe program
 * Description: Prints the alphabet in lowercase except 'q' and 'e',
 * followed by a new line.
 * Return: 0
 */

int main(void)
{
	char lowercase = 'a';

	while (lowercase <= 'z')
	{
		if (lowercase != 'e' && lowercase != 'q')
			putchar(lowercase);
		lowercase++;
	}
	putchar('\n');

	return (0);

}
