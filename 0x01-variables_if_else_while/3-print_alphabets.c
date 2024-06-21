#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description:
 * This program prints the alphabet in lowercase,
 * followed by the alphabet in uppercase,
 * and then a new line using the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char letter;

    for (letter = 'a'; letter <= 'z'; letter++)
    {
        putchar(letter); /* Print each lowercase letter */
    }

    for (letter = 'A'; letter <= 'Z'; letter++)
    {
        putchar(letter); /* Print each uppercase letter */
    }

    putchar('\n'); /* Print a newline character */

    return (0); /* Return 0 to indicate successful execution */
}
