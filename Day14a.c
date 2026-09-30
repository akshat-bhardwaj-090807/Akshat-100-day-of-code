#include <stdio.h>

int main() {
    int n;
    int sum = 0;

    if (scanf("%d", &n) != 1) {
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        sum += (2 * i - 1);
    }

    printf("%d\n", sum);

    return 0;
}
