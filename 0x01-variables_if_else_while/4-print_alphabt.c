#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description:
 * This program prints the alphabet in lowercase,
 * excluding the letters 'q' and 'e', followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
		{
			putchar(letter); /* Print each letter except 'e' and 'q' */
		}
	}

	putchar('\n'); /* Print a newline character */

	return (0); /* Return 0 to indicate successful execution */
}
