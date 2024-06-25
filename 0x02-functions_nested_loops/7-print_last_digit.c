#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: The number to find the last digit of
 *
 * Return: The last digit of n
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
		last_digit = -last_digit;

	_putchar('0' + last_digit);

	return (last_digit);
}
