#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main () {
	
	int decimal[] = {1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000};
	char *romano[] = {"I", "IV", "V", "IX", "X", "XL", "L", "XC", "C", "CD", "D", "CM", "M"};
    int i;
	for (i = 1; i <= 100; i++) {
		int num = i;
        int lugarcerto = (sizeof(decimal) / sizeof(decimal[0])) - 1;
        while (num > 0) {
            if (num >= decimal[lugarcerto]) {
                printf("%s", romano[lugarcerto]);
                num = num - decimal[lugarcerto];
            } else {
                lugarcerto--;
            }
        }
        printf(" - %i", i);
        printf("\n");
    }
}