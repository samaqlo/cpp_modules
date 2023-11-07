// #include <iostream>
// #include <stdio.h>
// #include <stdlib.h>
// #include <math.h>
// int bit_return(int a, int loc) // Bit returned at location
// {
//   int buf = a & 1<<loc;
//   if (buf == 0)
//     return 0;
//   else
//     return 1;
// }

// int main()
// {
//     float k = nanf("kk");
//     int *a = &k;
//     printf("%f\n", k);
//   for (int i = 31; i>=0; i--)
//   {
//     printf("%d",bit_return(*a,i));
//   }
//   // 0 11111111 10000000000000000000000
//   return 0;
// }
#include <string.h>
#include <stdio.h>

int main()
{
  int tab[5] = {1,2,3,4,5};

  int i = 0;
  while(i < 5)
  {
    memset(&tab[i], 1, 2);
    memset(&tab[i], 0, 1);
    i++;
  }
  i = 0;
  while(i < 5)
    printf("[%d]\n", tab[i++]);
}