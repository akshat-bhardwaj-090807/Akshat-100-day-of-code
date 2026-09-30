#include <stdio.h>

void checkPrime(int n) {
    if (n <= 1) {
        printf("Not prime\n");
        return;
    }
    int isPrime = 1;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            isPrime = 0;
            break;
        }
    }
    if (isPrime) {
        printf("Prime\n");
    } else {
        printf("Not prime\n");
    }
}

int main() {
    int num1 = 7;
    checkPrime(num1);

    int num2 = 10;
    checkPrime(num2);

    return 0;
}

