# include <iostream>
# include <string>


int main(void)
{
    std::string str;
    str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;
    std::cout << "address in memory of the string : " << &str << std::endl;
    std::cout << "address in memory of the string with stringPTR : " << stringPTR << std::endl;
    std::cout << "address in memory of the string with stringREF : " << &stringREF << std::endl;
    std::cout << "string by pointer : " << *stringPTR << std::endl;
    std::cout << "string by reference : " << stringREF << std::endl;

}