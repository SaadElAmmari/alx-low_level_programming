#include <stdio.h>

/**
 * main - This is where the magic happens
 *
 * Description: This program simply prints out the entire lowercase alphabet
 * in one go, followed by a new line. It's done using only the putchar function
 * to meet strict requirements. No fancy stuff, just straightforward printing.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char letter;

    // Loop through each letter from 'a' to 'z'
    for (letter = 'a'; letter <= 'z'; letter++)
    {
        putchar(letter);  // Print each letter
    }
    
    putchar('\n');  // Print a newline after the alphabet

    return 0;
}
