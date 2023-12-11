#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <algorithm>

template <typename T>
int easyfind(T param1, int val)
{
   if (std::find(param1.begin(), param1.end(), val) == param1.end())
      throw(std::out_of_range("!!! not found !!!"));
   return (std::distance(param1.begin(), std::find(param1.begin(), param1.end(), val)));
}

#endif