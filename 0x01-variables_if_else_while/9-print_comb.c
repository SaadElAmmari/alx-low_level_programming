#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of single-digit numbers.
 *              Numbers are separated by a comma and space.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int digit;

    for (digit = 0; digit <= 9; digit++)
    {
        putchar(digit + '0');

        if (digit != 9)
        {
            putchar(',');
            putchar(' ');
        }
    }

    putchar('\n');

    return (0);
}
