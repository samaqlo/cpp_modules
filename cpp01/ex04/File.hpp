#ifndef FILE_HPP
#define FILE_HPP

#include <iostream>
#include <fstream>

class File
{
    private:
        std::string str1;
        std::string str2;
        std::string line;
    public:
        File();
        void    replace(std::string line);

};

#endif