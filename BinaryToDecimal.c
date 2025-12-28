#include <stdio.h>
#include <math.h>
int main() {
    int n,dec=0,i=0;
    scanf("%d",&n);
    while(n>0){
        dec+=(n%10)*pow(2,i++);
        n/=10;
    }
    printf("%d",dec);
    return 0;
}
