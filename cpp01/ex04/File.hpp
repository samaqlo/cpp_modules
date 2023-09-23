#ifndef FILE_HPP
#define FILE_HPP

#include <iostream>

class File
{
    public:
        std::string name;
        std::string str1;
        std::string str2;
        File::File(std::string name, std::string str1, std::string str2);
};

#endif