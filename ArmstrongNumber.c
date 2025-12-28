#include <stdio.h>
#include <math.h>

int main() {
    int n, t, sum = 0, r;
    printf("Enter number: ");
    scanf("%d", &n);

    t = n;
    while (n > 0) {
        r = n % 10;
        sum += r * r * r;
        n /= 10;
    }

    if (sum == t)
        printf("Armstrong Number");
    else
        printf("Not Armstrong");
    return 0;
}
