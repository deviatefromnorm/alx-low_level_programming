#include "main.h"

/**
 * main - print 10 times the alphabet
 *
 * Return void
 */

void print_alphabet_x10(void) 
{
	char i, j;

	
	for (j = 0; j <= 10; j++) 
	{
		for (i = 'a'; i < 'z'; i++) 
		{
			_putchar(i);
		}
	_putchar('\n');
	}
	
	
}
