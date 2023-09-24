#include "File.hpp"

int main(int ac, char **av)
{
    File file_1;
    std::ifstream in_file;
    std::string filename;
    // std::string line;
    // std::string str1;
    // std::string str2;
    int pos;
    int o  = 0;

    filename.assign(av[1]);
    str1.assign(av[2]);
    str2.assign(av[3]);
    in_file.open(filename, std::fstream::in);
    std::ofstream out_file(filename + ".replace");
    while(1)
    {
        pos = 0;
        if (in_file.eof())
            break;
        getline(in_file, line);
        std::cout << line << std::endl;
        while (pos <= (int)line.size())
        {
            o = line.find(str1, pos);
            if (o < 0)
                break;
            else if (!o)
                pos++;
            else
            {
                line.erase(o, str1.size());
                line.insert(o, str2);
                pos += o;
            }
        }
        out_file << line << std::endl;
    }
}