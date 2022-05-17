#include <stdio.h>
int main1() {
  int x;
  x = (int)(pow(3, 2));
  float y;
  y = (float)(pow(2.0, 2));
  float z = (x + y) / (x + 1);
  float a = sqrt(z);
  printf("%f", a);
  return 0;
}