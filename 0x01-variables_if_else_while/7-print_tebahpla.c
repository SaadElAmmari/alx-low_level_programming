#include <stdio.h>

int main(void)
{
	char letter = 'z'; // Start from 'z', the last character in the alphabet
	
	while (letter >= 'a')
	{
		putchar(letter); // Print each letter using putchar
		letter--; // Move to the previous character in the alphabet
	}
	
	putchar('\n'); // Print a newline at the end
	
	return (0);
}
