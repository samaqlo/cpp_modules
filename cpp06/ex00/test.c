// #include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int bit_return(int a, int loc) // Bit returned at location
{
  int buf = a & 1<<loc;
  if (buf == 0)
    return 0;
  else
    return 1;
}

int main()
{
    float k = nanf("kk");
    int *a = &k;
    printf("%f\n", k);
  for (int i = 31; i>=0; i--)
  {
    printf("%d",bit_return(*a,i));
  }
  // 0 11111111 10000000000000000000000
  return 0;
}