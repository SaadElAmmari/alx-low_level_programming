#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description:
 * This program prints the alphabet in lowercase
 * followed by a new line using the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter); /* Print each letter using putchar */
	}

	putchar('\n'); /* Print a newline after the alphabet */

	return (0); /* Return 0 to indicate successful execution */
}
