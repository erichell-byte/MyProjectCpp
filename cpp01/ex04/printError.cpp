#include "printError.hpp"
#include "Replace.hpp"

int printError (int numError)
{
    switch (numError)
    {   
        case ERROR_ARGS_NUM:
            std::cout << "Error number of arguments" << std::endl;
            break;
        case ERROR_OPEN_FILE:
            std::cout << "Error open file" << std::endl;
            break;
        case ERROR_CREATE_FILE:
            std::cout << "Error create file FILENAME.replace" << std::endl;
            break;
        case ERROR_INPUT_STREAM:
            std::cout << "Error input file stream" << std::endl;
            break;
        case ERROR_EMPTY_STR:
            std::cout << "Error , empty one of str" << std::endl;
            break;
        case ERROR_EMPTY_FILE:
            std::cout << "Error , empty input file" << std::endl;
            break;
    }
    return (ERROR);
    
}