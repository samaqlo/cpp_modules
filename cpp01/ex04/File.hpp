#ifndef FILE_HPP
#define FILE_HPP

#include <iostream>
#include <fstream>

class File
{
    private:
        std::string str1;
        std::string str2;
    public:
        File();
        void    replace(std::string& line);
        void    set_str1(std::string str1);
        void    set_str2(std::string str2);

};

#endif