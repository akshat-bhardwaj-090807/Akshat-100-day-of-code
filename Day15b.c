#include <stdio.h>

int main() {
    int n;
    int reversed = 0;

    if (scanf("%d", &n) != 1) {
        return 1;
    }

    while (n != 0) {
        int remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }

    printf("%d\n", reversed);

    return 0;
}
