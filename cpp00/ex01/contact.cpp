#include "contact.hpp"

Contact::Contact(){}

Contact::~Contact(){}

void Contact::setFirstName(std::string FName)
{
    FirstName = FName;
}

void Contact::setLastName(std::string LName)
{
    LastName = LName;
}

void Contact::setNickName(std::string Nname)
{
    Nickname = Nname;
}

void Contact::setPhoneNumber(std::string PNumber)
{
    PhoneNumber = PNumber;
}

void Contact::setDarkestSecret(std::string DSecret)
{
    DarkestSecret = DSecret;
}

std::string Contact::getFirstname()
{
    return FirstName;
}

std::string Contact::getLastname()
{
    return LastName;
}

std::string Contact::getPhoneNumber()
{
    return PhoneNumber;
}

std::string Contact::getNickname()
{
    return Nickname;
}

std::string Contact::getDarkestSecret()
{
    return DarkestSecret;
}
