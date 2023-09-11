#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void times_table(void)
{
	int i, product;
	int multiply = 9;
	for (i = 0; i <= 9; i++) 
	{
		for (multiply = 1; multiply <= 9; multiply++) {
		product = multiply * i;
		_putchar(product / 10 + '0');
		_putchar(product % 10 + '0');
		_putchar(',');
		_putchar(' ');

		}
		_putchar('\n');
	}    
}
