#include <iostream>

int main()
{
    std::string brain = "HI THIS IS BRAIN";
    std::string* stringPTR = &brain;
    std::string& stringREF = brain;

    std::cout << "_________________Memory addrs_____________________" << std::endl;
    std::cout << "string addr : " << &brain << std::endl;
    std::cout << "stringPTR addr : " << &stringPTR << std::endl;
    std::cout << "stringREF addr : " << &stringREF << std::endl;
    std::cout << "_________________Values_____________________" << std::endl;
    std::cout << "string Value : " << brain << std::endl;
    std::cout << "stringPTR pointed Value : " << *stringPTR << std::endl;
    std::cout << "stringREF pointed Value : " << stringREF << std::endl;
}