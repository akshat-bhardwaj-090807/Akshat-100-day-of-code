#include <stdio.h>

void checkPerfectNumber(int n) {
    if (n <= 1) {
        printf("Not perfect number\n");
        return;
    }
    int sum = 0;
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    if (sum == n) {
        printf("Perfect number\n");
    } else {
        printf("Not perfect number\n");
    }
}

int main() {
    int num1 = 6;
    checkPerfectNumber(num1);

    int num2 = 10;
    checkPerfectNumber(num2);

    return 0;
}
