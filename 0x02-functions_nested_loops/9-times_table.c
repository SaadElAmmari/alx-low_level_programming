#include "main.h"

/**
 * times_table - Prints the 9 times table, starting from 0
 */
void times_table(void)
{
    int row, column, product;

    for (row = 0; row <= 9; row++)
    {
        for (column = 0; column <= 9; column++)
        {
            product = row * column;

            if (column == 0)
                _putchar('0');
            else if (product < 10)
                _putchar(' ');  /* extra space for single-digit numbers */
            else
                _putchar((product / 10) + '0');  /* tens digit */

            _putchar((product % 10) + '0');  /* units digit */

            if (column < 9)
            {
                _putchar(',');  /* separate each number with a comma */
                _putchar(' ');  /* add space after comma */
            }
        }
        _putchar('\n');  /* move to the next line after each row */
    }
}
