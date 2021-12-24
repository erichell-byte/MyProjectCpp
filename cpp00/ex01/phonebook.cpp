#include "phonebook.hpp"
#include "contact.hpp"


PhoneBook::PhoneBook()
{
    size = 0;
}

PhoneBook::~PhoneBook(){}    

static std::string SetDot(std::string str)
{
    std::string res = str;
    if (res.size() >= 10)
    {
        res[9] = '.';
        res.erase(10) ;
    }
    return (res);
}

void PhoneBook::InputData(int i)
{       
    std::string Temp;
    std::cout << "Please enter a first name" << std::endl;
    std::cin >> Temp;
    contact[i].setFirstName(Temp);
    std::cout << "Please enter a last name" << std::endl;
    std::cin >> Temp;
    contact[i].setLastName(Temp);
    std::cout << "Please enter a nickname" << std::endl;
    std::cin >> Temp;
    contact[i].setNickName(Temp);
    std::cout << "Please enter a phone number" << std::endl;
    std::cin >> Temp;
    contact[i].setPhoneNumber(Temp);
    std::cout << "Please enter a darkest secret" << std::endl;
    std::cin >> Temp;
    contact[i].setDarkestSecret(Temp);
    if (size < 8)
        size++;
    }

void PhoneBook::OutputData()
{   
    int index = 0;
    if (size == 0)
    {   
        std::cout << "Have not contact to search!" << std::endl;
        return ;
    }
    for (int i = 0; i < size; i++)
    {
    std::cout << std::right << std::setw(10) << i + 1 << "|" ;
    std::cout << std::right << std::setw(10) << SetDot(contact[i].getFirstname()) << "|" ;
    std::cout << std::right << std::setw(10) << SetDot(contact[i].getLastname()) << "|" ;
    std::cout << std::right << std::setw(10) << SetDot(contact[i].getNickname()) << "|" << std::endl;
    }
    while (1)
    {
        std::cout << "Please enter index :" << std::endl;
        std::cin >> index;
        if (index < 1 || index > size)
        {
            std::cout << "I cant find this person!" << std::endl;
            continue;
        }
        std::cout << "No. " << index-- << std::endl;
        std::cout << "1.First Name :" << contact[index].getFirstname() << std::endl;
        std::cout << "2.Last Name :" << contact[index].getLastname() << std::endl;
        std::cout << "3.NickName :" << contact[index].getNickname() << std::endl;
        std::cout << "4.PhoneNumber :" << contact[index].getPhoneNumber() << std::endl;
        std::cout << "5.Darkest Secret :" << contact[index].getDarkestSecret() << std::endl;
        break ;
    }
}



    

    
