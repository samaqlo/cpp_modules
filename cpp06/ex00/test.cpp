#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int bit_return(int a, int loc)
{
  int buf = a & 1<<loc;
  if (buf == 0)
    return 0;
  else
    return 1;
}

int main()
{
  //   float k = nanf("kkk");
  float l = 1;
  float k = 340282346638528859811704183484516925440.0000000000000000 + MAXFLOAT;
    float *a = &l;
  for (int i = 31; i>=0; i--)
  {
    printf("%d",bit_return(*a,i));
  }
  std::cout << k<< std::endl;
  return 0;
}