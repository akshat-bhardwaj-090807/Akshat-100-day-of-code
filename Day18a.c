#include <stdio.h>

void printFactors(int n) {
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int num1 = 6;
    printFactors(num1);

    int num2 = 10;
    printFactors(num2);

    return 0;
}
