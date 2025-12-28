#include <stdio.h>
int main() {
    int n,bin=0,p=1;
    scanf("%d",&n);
    while(n>0){
        bin+= (n%2)*p;
        n/=2;
        p*=10;
    }
    printf("%d",bin);
    return 0;
}
