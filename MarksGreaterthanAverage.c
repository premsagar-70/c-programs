#include <stdio.h>
int main(){
    int a[50],n,i;
    float avg,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){ scanf("%d",&a[i]); sum+=a[i]; }
    avg=sum/n;
    for(i=0;i<n;i++)
        if(a[i]>avg) printf("%d ",a[i]);
    return 0;
}
