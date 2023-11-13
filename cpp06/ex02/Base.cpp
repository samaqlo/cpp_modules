#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base()
{

}

Base * generate(void)
{
    std::srand(std::time(0));
    switch(std::rand() % 3)
    {
        case 0:
            return (new A());
            break;
        case 1:
            return (new B());
            break;
        case 2:
            return (new C());
            break;
    }
    return(NULL);
}

void identify(Base* p)
{
    char type = (dynamic_cast<A *>(p)? 'A':0) + (dynamic_cast<B *>(p)? 'B':0) + ((dynamic_cast<C *>(p))? 'C':0);
    if (!type)
        throw (std::bad_cast());
    std::cout << "The type of the pointer is : " << type << std::endl;
}

void identify(Base& p)
{
    try
    {
        (void)dynamic_cast<A&>(p);
        std::cout << "The type of the reference is : A" << std::endl;
    }
    catch(const std::exception& e)
    {
        try
        {
            (void)dynamic_cast<B&>(p);
            std::cout << "The type of the reference is : B" << std::endl;
        }
        catch(const std::exception& e)
        {
            try
            {
                 (void)dynamic_cast<C&>(p);
                std::cout << "The type of the reference is : C" << std::endl;
            }
            catch(const std::exception& e)
            {
                std::cout << e.what() << std::endl;
            }
        }
        
    }
}