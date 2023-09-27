#include "File.hpp"

int main(int ac, char **av)
{
    if (ac != 4)
        return (std::cout << "Bad Args" << std::endl, 1);
    File file_1;
    std::string filename;
    std::string line;

    filename.assign(av[1]);
    file_1.set_str1(av[2]);
    file_1.set_str2(av[3]);
    std::ifstream in_file(filename);
    if (!in_file)
        return (std::cerr << filename << " : No such file or directory" <<  std::endl, 1);
    std::ofstream out_file(filename + ".replace");
    if (!out_file)
        return (std::cerr << "Cannot create " << filename + ".replce" << std::endl, 1);
    while(!in_file.eof())
    {
        getline(in_file, line);
        file_1.replace(line);
        out_file << line << std::endl;
    }
}