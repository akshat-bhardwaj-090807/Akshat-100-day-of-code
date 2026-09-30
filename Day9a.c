#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double discriminant, root1, root2, realPart, imagPart;

    printf("Enter coefficients a, b and c: ");
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3) {
        printf("Invalid input.\n");
        return 1;
    }


    if (a == 0) {
        printf("Invalid input: 'a' cannot be zero in a quadratic equation.\n");
        return 1;
    }

    discriminant = (b * b) - (4 * a * c);

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and different: %g, %g\n", root1, root2);
    } 
    else if (discriminant == 0) {
        root1 = -b / (2 * a);
        printf("Roots are real and same: %g\n", root1);
    } 
    else {

        printf("Roots are complex\n");
        

  realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are: %g + %gi and %g - %gi\n", realPart, imagPart, realPart, imagPart);
        */
    }

    return 0;
}
