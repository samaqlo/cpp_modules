#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(std::string input_file)
{
    this->in_file.open(input_file);
    if (!in_file.is_open())
        throw (std::runtime_error("Can't open " + input_file + "file !!!"));
    this->db_file.open("cpp_09/data.csv");
    if (!db_file.is_open())
        throw (std::runtime_error("please add a database"));
    this->fill_map();
}

BitcoinExchange::BitcoinExchange()
{

}

BitcoinExchange::~BitcoinExchange()
{

}

BitcoinExchange::BitcoinExchange(BitcoinExchange & other)
{

}

BitcoinExchange & BitcoinExchange::operator=(BitcoinExchange & other)
{
    // _DB = other._DB;
    // in_file = other.in_file;
}

void    BitcoinExchange::fill_map()
{
    std::string line;
    while(!db_file.eof())
    {
        getline(db_file, line);
        if (line.find(',') != 10)
            continue;
        _DB[line.substr(0, line.find(','))] = atof(line.substr(line.find(',') + 1, line.length()).c_str());
    }
}

void    BitcoinExchange::print_map()
{
    map_iterator it = _DB.begin();
    for(; it != _DB.end(); it++)
    std::cout <<  it->first << " | " << it->second << std::endl;
}

void    BitcoinExchange::exec()
{
    std::string line;
    std::pair<std::string, float> elem;

    while(!in_file.eof())
    {
        getline(in_file, line);
        if (!line.compare("date | value"))
            continue;
        try
        {
            elem = validate_input(line);
            map_iterator it = _DB.find(elem.first);
            if (it == _DB.end())
            {
                _DB.insert(elem);
                it = _DB.lower_bound(elem.first);
                _DB.erase(elem.first);
                --it;
            }
            std::cout << elem.first << " ==> " << elem.second << " = " << elem.second * it->second << std::endl;
        }
        catch(std::exception & e)
        {
            std::cout << e.what() << std::endl;
        }
    }
    in_file.close();
}

void    validate_date(std::string date)
{
    time_t  stock_time;
    struct tm *time_struct;

    time(&stock_time);
    time_struct = localtime(&stock_time);
    int year = atoi(date.substr(0, date.find('-')).c_str());
    int month = atoi(date.substr(date.find_first_of('-') + 1, date.find_last_of('-') - date.find_first_of('-') - 1).c_str());
    int day = atoi(date.substr(date.find_last_of('-') + 1, date.length()).c_str());
    if (((year%4 || year % 100 == 0 || year % 400 != 0) && month == 2 && day > 28) || (month == 2 && day > 29) || (!month%2 && month != 8 && day > 30) || month < 0 || month > 12 || day < 0 || day > 31)
        throw (std::logic_error("Invalid date ==> " + date));
    if (year < 2009 || year > time_struct->tm_year + 1900 || (year == time_struct->tm_year + 1900 && (month > time_struct->tm_mon + 1 || (month == time_struct->tm_mon + 1 && day > time_struct->tm_mday))))
        throw (std::logic_error("invalid year ==>" + date.substr(0, date.find('-'))));
}

std::pair<std::string, float>    BitcoinExchange::validate_input(std::string input_line)
{
    std::pair<std::string, float> elements;

    if (input_line.find('|') == input_line.npos)
        throw (std::logic_error("Error: bad input => " + input_line));
    elements.first.assign(input_line.substr(0, input_line.find('|') - 1));
    elements.second = atof(input_line.substr(input_line.find('|') + 1, input_line.length()).c_str());
    if (elements.second < 0 || elements.second > 1000)
        throw(std::logic_error("Error: too large a number ==>" + input_line.substr(input_line.find('|') + 1, input_line.length())));
    validate_date(elements.first);
    return (elements);
}