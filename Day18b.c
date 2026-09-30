#include <stdio.h>

int findHCF(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1_a = 12, num1_b = 18;
    printf("%d\n", findHCF(num1_a, num1_b));

    int num2_a = 7, num2_b = 9;
    printf("%d\n", findHCF(num2_a, num2_b));

    return 0;
}
