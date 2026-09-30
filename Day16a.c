#include <stdio.h>
#include <limits.h>

void decimalToBinary(int n) {
    if (n == 0) {
        printf("0");
        return;
    }

    int i;
    int hasStartedPrinting = 0;
    
    for (i = (sizeof(int) * CHAR_BIT) - 1; i >= 0; i--) {
        int mask = 1 << i;
        if (n & mask) {
            printf("1");
            hasStartedPrinting = 1;
        } else {
            if (hasStartedPrinting) {
                printf("0");
            }
        }
    }
}

int main() {
    int number;

    number = 10;
    printf("Input: %d\n", number);
    printf("Output: ");
    decimalToBinary(number);
    printf("\n\n");

    number = 7;
    printf("Input: %d\n", number);
    printf("Output: ");
    decimalToBinary(number);
    printf("\n");

    return 0;
}
