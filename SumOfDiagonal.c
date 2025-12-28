#include <stdio.h>
int main(){
    int a[10][10],n,i,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
            if(i==j) sum+=a[i][j];
        }
    }
    printf("%d",sum);
    return 0;
}
