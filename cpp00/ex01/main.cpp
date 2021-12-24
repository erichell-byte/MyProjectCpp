#include "contact.hpp"
#include "phonebook.hpp"

int main(void)
{
   std::string tmp;
   PhoneBook phoneBook;
   int iter = 0;
    while (1)
    {
        std::cin >> tmp;
        if (tmp == "EXIT")
            return (0);
        else if (tmp == "ADD")
        {   
            if (iter == 8)
                iter = 0;
            phoneBook.InputData(iter);
            iter++;    
        }
        else if (tmp == "SEARCH")
            phoneBook.OutputData();
        else
            std::cout << "Not a valid command." << std::endl;
    }
    return (0);
}