#pragma once

#include <iostream>
#include <map>
#include <algorithm>
#include <fstream>

#define map_iterator std::map<std::string, float>::iterator

class BitcoinExchange
{
    private:
        std::map<std::string, float>  _DB;
        std::string     file_name;
        std::ifstream   in_file;
        std::ifstream   db_file;
    public:
        BitcoinExchange(std::string input_file);
        BitcoinExchange();
        ~BitcoinExchange();
        BitcoinExchange(BitcoinExchange & other);
        BitcoinExchange & operator=(BitcoinExchange & other);
        void    fill_map();
        void    print_map();
        std::pair<std::string, float>    validate_input(std::string input_line);
        void    exec();
};