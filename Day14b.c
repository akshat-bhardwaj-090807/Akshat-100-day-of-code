#include <stdio.h>

int main() {
    int n;
    long long product = 1;
    int has_even = 0;

    if (scanf("%d", &n) != 1) {
        return 1;
    }

    for (int i = 2; i <= n; i += 2) {
        product *= i;
        has_even = 1;
    }

    if (has_even) {
        printf("%lld\n", product);
    } else {
        printf("0\n");
    }

    return 0;
}
