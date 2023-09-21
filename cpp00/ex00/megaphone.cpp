#include <iostream>
#include <string>

void  upper(std::string str)
{
  int i = 0;
  while (str[i])
  {
    std::cout << (char)std::toupper(str[i]);
    i++;
  }
  
}
int	main(int ac, char **av)
{
  std::string input;
  int i;

  i = 1;
  if (ac == 1)
    std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
  else
  while(i < ac)
  {
    input.assign(av[i++]);
    upper(input);
  }
  std::cout << std::endl;
  return (0);
}	