#include <stdio.h>

void onesComplement(char binary[]) {
    int i = 0;
    while (binary[i] != '\0') {
        if (binary[i] == '1') {
            printf("0");
        } else if (binary[i] == '0') {
            printf("1");
        }
        i++;
    }
    printf("\n");
}

int main() {
    char bin1[] = "1010";
    onesComplement(bin1);

    char bin2[] = "1111";
    onesComplement(bin2);

    return 0;
}

