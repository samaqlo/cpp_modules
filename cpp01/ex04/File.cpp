#include "File.hpp"

void    File::replace(std::string& line)
{
    int pos;
    int m_pos;

    pos = 0;
    while (pos <= (int)line.size())
        {
            m_pos = line.find(this->str1, pos);
            if (m_pos < 0)
                break;
            else if (!m_pos)
                pos++;
            else
            {
                line.erase(m_pos, this->str1.size());
                line.insert(m_pos, this->str2);
                pos += this->str1.size();
            }
        }
}

File::File()
{};
void    File::set_str1(std::string str1)
{
    this->str1.assign(str1);
}
void    File::set_str2(std::string str2)
{
    this->str2.assign(str2);
}
