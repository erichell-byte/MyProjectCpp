#include <iostream>

int main(int args, char **argv)
{
    int l = 0, k = 0;
    int i = 0;
    if (args > 1)
    {
        while (argv[++i])
        {
            // std::cout << (argv[i]) << std::endl;
            while(argv[i][k] != '\0')
            {
                std::cout << (char)toupper(argv[i][k]);
                k++;
            }
            k = 0;
        }
        std::cout << std::endl;
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}