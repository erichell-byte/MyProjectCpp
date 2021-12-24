#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

class Contact
{
    private:
        std::string FirstName;
        std::string LastName;
        std::string Nickname;
        std::string PhoneNumber;
        std::string DarkestSecret;
    public:
        void setFirstName(std::string);
        void setLastName(std::string);
        void setNickName(std::string);
        void setPhoneNumber(std::string);
        void setDarkestSecret(std::string);
        std::string getFirstname(void);
        std::string getLastname(void);
        std::string getNickname(void);
        std::string getPhoneNumber(void);
        std::string getDarkestSecret(void);
        Contact();
        ~Contact();
} ;

#endif