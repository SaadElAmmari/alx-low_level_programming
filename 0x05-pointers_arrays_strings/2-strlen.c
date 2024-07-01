#include "main.h"
/**
 * _strlen - returns length of the string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int count;

	count = 0;
	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
