#include <stdio.h>  /* Include the standard I/O header for printf */

/**
 * print_to_98 - Prints all natural numbers from n to 98, followed by a new line
 * @n: Starting number
 *
 * Return: void
 */
void print_to_98(int n)
{
    int i;  /* Declare loop control variable outside the for loop */

    /* Print numbers from n to 98 */
    if (n <= 98)
    {
        /* Incrementing loop */
        for (i = n; i <= 98; ++i)
        {
            printf("%d", i);
            if (i != 98)
                printf(", ");
        }
    }
    else
    {
        /* Decrementing loop */
        for (i = n; i >= 98; --i)
        {
            printf("%d", i);
            if (i != 98)
                printf(", ");
        }
    }
    printf("\n");  /* Print newline at the end */
}
