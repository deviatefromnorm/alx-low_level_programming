#include <stdio.h>
int main (void) {
        int a, b;
        for (a = 0; a < 9; a++) {
	for (b = 1; b <= 9; b++) {
                putchar('0' + (a % 10));
		putchar('0' + (b % 10));
		putchar(',');
                putchar(' ');
	}
                
        }
        return (0);
}        
