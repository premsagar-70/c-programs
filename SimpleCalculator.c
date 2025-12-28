#include <stdio.h>

int main() {
    int a, b, ch;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("1.Add 2.Sub 3.Mul 4.Div\n");
    scanf("%d", &ch);

    if (ch == 1) printf("Sum = %d", a+b);
    else if (ch == 2) printf("Diff = %d", a-b);
    else if (ch == 3) printf("Product = %d", a*b);
    else if (ch == 4) printf("Quotient = %d", a/b);
    else printf("Invalid choice");

    return 0;
}
