#include <stdio.h>
/**
 *main -> prints lower case alphabet in reverse
 *Return: Always 0 (Success)
 */
int main (void)
{
	char i;
	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
		putchar('\n');
	}
	return (0);
}
