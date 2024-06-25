#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int row, column, product;

	for (row = 0; row <= 9; row++)
	{
		_putchar('0'); /* Print the beginning of the row with 0 */

		for (column = 1; column <= 9; column++)
		{
			_putchar(',');
			_putchar(' ');

			product = row * column;

			if (product <= 9)
				_putchar(' '); /* Print a space for alignment with two-digit numbers */
			else
				_putchar((product / 10) + '0'); /* Print the tens digit */

			_putchar((product % 10) + '0'); /* Print the ones digit */
		}

		_putchar('\n'); /* Move to the next line after each row */
	}
}
