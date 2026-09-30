#include <stdio.h>
#include <math.h>

void checkArmstrong(int n) {
    if (n < 0) {
        printf("Not Armstrong\n");
        return;
    }
    int original = n;
    int temp = n;
    int digits = 0;
    int sum = 0;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }
    temp = n;
    while (temp != 0) {
        int remainder = temp % 10;
        sum += pow(remainder, digits);
        temp /= 10;
    }
    if (sum == original) {
        printf("Armstrong\n");
    } else {
        printf("Not Armstrong\n");
    }
}

int main() {
    int num1 = 153;
    checkArmstrong(num1);

    int num2 = 123;
    checkArmstrong(num2);

    return 0;
}

