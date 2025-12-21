#include <stdio.h>

int main() {
    float p, t, r, si;
    printf("Enter principal, time, rate: ");
    scanf("%f %f %f", &p, &t, &r);

    si = (p * t * r) / 100;
    printf("Simple Interest = %.2f", si);
    return 0;
}
