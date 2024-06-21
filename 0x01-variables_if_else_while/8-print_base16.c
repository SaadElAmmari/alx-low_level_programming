#include <stdio.h>

int main(void)
{
    char digit;

    /* Print numbers '0' to '9' */
    for (digit = '0'; digit <= '9'; digit++)
    {
        putchar(digit);
    }

    /* Print letters 'a' to 'f' */
    for (digit = 'a'; digit <= 'f'; digit++)
    {
        putchar(digit);
    }

    /* Print newline character */
    putchar('\n');

    return 0;
}
