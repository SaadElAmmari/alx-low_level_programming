#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description:
 * This program prints all single digit numbers of base 10 starting from 0,
 * followed by a new line, using only the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit;

	for (digit = 0; digit <= 9; digit++)
	{
		putchar(digit + '0'); /* Print each digit using putchar */
	}

	putchar('\n'); /* Print a newline character */

	return (0); /* Return 0 to indicate successful execution */
}
