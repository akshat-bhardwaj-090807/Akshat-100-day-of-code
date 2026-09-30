#include <stdio.h>

int main() {
    double cp, sp;
    double percentage;

    if (scanf("%lf %lf", &cp, &sp) != 2) {
        return 1;
    }

    if (sp > cp) {
        percentage = ((sp - cp) / cp) * 100;
        printf("Profit %g%%\n", percentage);
    } else if (cp > sp) {
        percentage = ((cp - sp) / cp) * 100;
        printf("Loss %g%%\n", percentage);
    } else {
        printf("No Profit No Loss\n");
    }

    return 0;
}
