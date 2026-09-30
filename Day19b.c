#include <stdio.h>

int findGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int findLCM(int a, int b) {
    return (a * b) / findGCD(a, b);
}

int main() {
    int num1_a = 4, num1_b = 5;
    printf("%d\n", findLCM(num1_a, num1_b));

    int num2_a = 7, num2_b = 3;
    printf("%d\n", findLCM(num2_a, num2_b));

    return 0;
}
