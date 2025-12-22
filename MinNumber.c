#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Smallest = %d", (a < b) ? a : b);
    return 0;
}
