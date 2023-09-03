#include <iostream>
#include <cctype>

using std::string;
using std::cout;

void  upper(string str)
{
  int i = 0;
  while (str[i])
  {
    cout << (char)toupper(str[i]);
    i++;
  }
  
}
int	main(int ac, char **av)
{
  int i;

  i = 1;
  if (ac == 1)
    cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
  else
  while(i < ac)
    upper(av[i++]);
  cout << "\n";
  return (0);
}	