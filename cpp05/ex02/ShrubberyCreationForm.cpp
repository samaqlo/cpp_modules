
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("shrubbery creation", 137, 145)
{
    // std::cout << "ShrubberyCreationForm Default constructor called" << std::endl;

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("shrubbery creation", 137, 145)
{
    // std::cout << "ShrubberyCreationForm Default constructor called" << std::endl;
    this->target.assign(target);
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) 
{
    // std::cout << "ShrubberyCreationForm Copy constructor" << std::endl;
    *this = other;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other) 
{
    // std::cout << "ShrubberyCreationFormCopy assignment operator called" << std::endl;
    target = other.target;
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm() 
{
    // std::cout << "ShrubberyCreationForm Destructor called" << std::endl;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
        checker(executor);
        std::ofstream out_file(target + "_shrubbery");
        if (!out_file)
            throw (std::runtime_error("Error : can't open " + target + "_shrubbery"));
        out_file << 
        "                      ___\n"
        "                _,-'\"\"   \"\"\"`--.\n"
        "             ,-'          __,,-- \\\n"
        "           ,'    __,--\"\"\"dF      )\n"
        "          /   .-\"Hb_,--\"\"dF      /\n"
        "        ,'       _Hb ___dF\"-._,-'\n"
        "      ,'      _,-\"\"\"\"   \"\"--..__\n"
        "     (     ,-'                  `.\n"
        "      `._,'     _   _             ;\n"
        "       ,'     ,' `-'Hb-.___..._,-'\n"
        "       \\    ,\"Hb.-'HH`-.dHF\"\n"
        "        `--'   \"Hb  HH  dF\"\n"
        "                \"Hb HH dF\n"
        "                 \"HbHHdF\n"
        "                  |HHHF\n"
        "                  |HHH|\n"
        "                  |HHH|\n"
        "                  |HHH|\n"
        "                  |HHH|\n"
        "                  dHHHb\n"
        "                .dFd|bHb.\n"
        "      o       .dHFdH|HbTHb.          o\n"
        "\\  Y  |  \\__,dHHFdHH|HHhoHHb.__Krogg  Y\n"
        "########################################## " << std::endl;
        out_file.close();
}
