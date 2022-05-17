#include<stdio.h>
int main(){
    int x;
    x =3;
    float y;
    y=(float)(pow(2.0,2));
    float z=(x+y)/(x+1);
    float a=sqrt(z);
    printf("%f",a);
    return 0;
}