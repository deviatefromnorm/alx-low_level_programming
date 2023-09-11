#include "main.h"

/**
 * main - print the last digit of a number
 *
 * Return: last value of the last digit
 */

int print_last_digit(int n)
{
	int lastDigit;
	lastDigit = n % 10;
	if (n < 0) 
		lastDigit *= -1;
	_putchar(lastDigit + '0');
	return lastDigit;
	
}
