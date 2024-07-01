#include "main.h"

/**
 * print_rev - Prints  string in reverse
 * @s: The string to be printed
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	while (i--)
		_putchar(s[i]);
	_putchar('\n');
}
