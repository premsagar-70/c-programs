#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Largest = %d", (a > b) ? a : b);
    return 0;
}
