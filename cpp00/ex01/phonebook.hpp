#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include "contact.hpp"


class PhoneBook
{
    private:
        Contact contact[8];
        int size;
    public:
    PhoneBook();
    ~PhoneBook();
    void InputData(int i);
    void OutputData();
} ;

#endif
