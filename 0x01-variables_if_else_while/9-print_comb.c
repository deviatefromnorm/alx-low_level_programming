#include <stdio.h>
int main (void) {
	int i;
	for (i = 0; i < 10; i++) {
		putchar('0' + (i % 10));
		putchar(' ');
		putchar(',');
	}
	return (0);
}
