#include <stdio.h>

int productOfOddDigits(int n) {
    int product = 1;
    int hasOdd = 0;
    if (n < 0) {
        n = -n;
    }
    while (n != 0) {
        int digit = n % 10;
        if (digit % 2 != 0) {
            product *= digit;
            hasOdd = 1;
        }
        n /= 10;
    }
    return hasOdd ? product : 1;
}

int main() {
    int num1 = 12345;
    printf("%d\n", productOfOddDigits(num1));

    int num2 = 2468;
    printf("%d\n", productOfOddDigits(num2));

    return 0;
}
