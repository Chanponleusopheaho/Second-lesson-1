#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
  int a;
  int b;
  int c;
  float deta;
  a =3;
  b =-5;
  c =2;
  //deta = b**2-4ac
  deta =((pow(b,2))-4*a*c);
  float d =sqrt(deta);
  float x1 =((-b)+d)/(2*a);
  float x2 =((-b)-d)/(2*a);
  printf("X1:%.2f\n",x1);
  printf("X2:%.2f",x2);
  return 0;
}