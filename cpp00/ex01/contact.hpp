#ifndef Contact_HPP
#define Contact_HPP

class Contact
{
    public :
        int     index;
        std::string getfname();
        std::string getlname();
        std::string getnname();
        std::string getpnum();
        std::string getdsec();
        void setfname(std::string);
        void setlname(std::string);
        void setnname(std::string);
        void setpnum(std::string);
        void setdsec(std::string);
        Contact();

    private :
        std::string  f_name;
        std::string  l_name;
        std::string  n_name;
        std::string  p_num;
        std::string  darkset_sec;
};

#endif