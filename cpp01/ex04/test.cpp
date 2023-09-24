#include <iostream>

int main()
{
    std::string str1;
    std::string str2;

    str1 = "3awed lrassek , 3awed lrassek , 3awed lrassek , 3awed lrassek , 3awed lrassek , 3awed lrassek , 3awed lrassek , 3awed lrassek , 3awed lrassek , 3awed lrassek , 3awed lrassek , 3awed lrassek , 3awed lrassek , 3awed lrassek , 3awed lrassek , 3awed lrassek , 3awed lrassek , 3awed lrassek , 3awed lrassek , 3awed lrassek , 3awed lrassek , 3awed lrassek , 3awed lrassek , 3awed lrassek , 3awed lrassek , 3awed lrassek , 3awed lrassek , 3awed lrassek , 3awed lrassek , 3awed lrassek , 3awed lrassek , 3awed lrassek , 3awed lrassek , 3awed lrassek , 3awed lrassek , 3awed lrassek , 3awed lrassek , 3awed lrassek , 3awed lrassek , 3awed lrassek , 3awed lrassek , 3awed lrassek , 3awed lrassek , 3awed lrassek , 3awed lrassek , 3awed lrassek , 3awed lrassek , 3awed lrassek , 3awed lrassek , 3awed lrassek , 3awed lrassek , 3awed lrassek , 3awed lrassek , 3awed lrassek , 3awed lrassek , 3awed lrassek , 3awed lrassek , 3awed lrassek , 3awed lrassek , 3awed lrassek , 3awed lrassek , 3awed lrassek , 3awed lrassek , 3awed lrassek , 3awed lrassek , 3awed lrassek , 3awed lrassek , 3awed lrassek , 3awed lrassek , 3awed lrassek , 3awed lrassek , 3awed lrassek , 3awed lrassek , 3awed lrassek , 3awed lrassek , 3awed lrassek , 3awed lrassek , 3awed lrassek , 3awed lrassek , 3awed lrassek , 3awed lrassek , 3awed lrassek , 3awed lrassek , 3awed lrassek , 3awed lrassek , 3awed lrassek , 3awed lrassek , 3awed lrassek , 3awed lrassek , 3awed lrassek , 3awed lrassek , 3awed lrassek , 3awed lrassek , 3awed lrassek , 3awed lrassek , 3awed lrassek , 3awed lrassek , 3awed lrassek , 3awed lrassek , 3awed lrassek , ";
    str2 = "zbi";
    std::string str = "lrassek";
    int o = 0;
    int pos = 0;
    while (pos <= (int)str1.size())
    {
        o = str1.find(str, pos);
        std::cout << o << std::endl;
        if (o < 0)
            break;
        else
            pos += (str.size());
    }
    
}