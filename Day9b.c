#include <stdio.h>

int main() {
    double percentage;


    printf("Enter percentage (0-100): ");
    if (scanf("%lf", &percentage) != 1) {
        printf("Invalid input. Please enter a numerical value.\n");
        return 1;
    }


    if (percentage < 0 || percentage > 100) {
        printf("Invalid input. Percentage must be between 0 and 100.\n");
        return 1;
    }


    if (percentage >= 90) {
        printf("Grade A\n");
    } 
    else if (percentage >= 80) {
        printf("Grade B\n");
    } 
    else if (percentage >= 70) {
        printf("Grade C\n");
    } 
    else if (percentage >= 60) {
        printf("Grade D\n");
    } 
    else {
        printf("Grade F\n");
    }

    return 0;
}
