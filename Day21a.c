#include <stdio.h>
#include <math.h>

int swapFirstAndLast(int n) {
    if (n < 10 && n > -10) {
        return n;
    }
    
    int isNegative = 0;
    if (n < 0) {
        isNegative = 1;
        n = -n;
    }

    int temp = n;
    int digits = 0;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    int lastDigit = n % 10;
    int firstDigit = n / (int)pow(10, digits - 1);

    int remainingNum = n % (int)pow(10, digits - 1);
    remainingNum = remainingNum / 10;

    int swapped = lastDigit * (int)pow(10, digits - 1) + remainingNum * 10 + firstDigit;

    return isNegative ? -swapped : swapped;
}

int main() {
    int num1 = 1234;
    printf("%d\n", swapFirstAndLast(num1));

    int num2 = 1001;
    printf("%d\n", swapFirstAndLast(num2));

    return 0;
}
