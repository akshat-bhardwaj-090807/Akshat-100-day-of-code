#include <stdio.h>

void checkPalindrome(int n) {
    if (n < 0) {
        printf("Not palindrome\n");
        return;
    }
    int original = n;
    int reversed = 0;
    while (n != 0) {
        reversed = reversed * 10 + (n % 10);
        n /= 10;
    }
    if (original == reversed) {
        printf("Palindrome\n");
    } else {
        printf("Not palindrome\n");
    }
}

int main() {
    int num1 = 121;
    checkPalindrome(num1);

    int num2 = 123;
    checkPalindrome(num2);

    return 0;
}

