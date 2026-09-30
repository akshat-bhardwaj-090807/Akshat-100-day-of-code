#include <stdio.h>

int main() {
    int n;
    long long factorial = 1;

    if (scanf("%d", &n) != 1) {
        return 1;
    }

    if (n < 0) {
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }

    printf("%lld\n", factorial);

    return 0;
}

