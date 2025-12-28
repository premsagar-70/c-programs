#include <stdio.h>
float area(float b,float h){ return 0.5*b*h; }
int main(){
    float b,h;
    scanf("%f%f",&b,&h);
    printf("%f",area(b,h));
    return 0;
}
