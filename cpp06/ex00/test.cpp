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

// int main()
// {
  //   float k = nanf("kkk");
  // float l = 1;
//   try{
//   std::cout << std::stoi("3.5f") << std::endl;
  
//   }
//   catch(std::exception & e)
// {
//   std::cout << e.what();
// }
// std::string str("aaaaaa");
// if (str.find("b") == str.npos)
//   std::cout << str.find("b");
  // float k = 340282346638528859811704183484516925440.0000000000000000 + MAXFLOAT;
    // float *a = &l;
    // int *ptr;
    // unsigned int a = *ptr;
    // printf("[%d]\n", a);
    // std::cout << a;
 
  // for (int i = 31; i>=0; i--)
  // {
  //   printf("%d",bit_return(*a,i));
  // }
  // std::cout << k<< std::endl;
  // return 0;
// }
// #include <iostream>

int main() {
    // int myInt = 42;
    // float myFloat = static_cast<float>(myInt);

    // std::cout << "Integer: " << myInt << std::endl;
    // std::cout << "Float (cast from int): " << std::fixed << std::setpres << myFloat << std::endl;
    // double j = INT32_MAX;
    // std::cout << j + 255 << std::endl;
  // std::cout << std::fixed << std::strtof("-1.797631348623158E+309f", NULL);
  std::cout << std::isprint(124) << std::endl;
    return 0;
}