#include "Replace.hpp"
#include "printError.hpp"

int main(int argc, char **argv)
{
    Replace replace;
    std::string filename;
    std::string replacedStr;
    std::string replacemedStr;
    if (argc != 4)
    {
        printError(ERROR_ARGS_NUM);
        return (ERROR);
    }
    else
    {
        filename = argv[1];
        replacedStr = argv[2];
        replacemedStr = argv[3];
        if (replace.OpenCreateWrite(filename))
            return (ERROR);
        if (replace.replace(replacedStr, replacemedStr))
            return (ERROR);
        if (replace.finalWriteToFile())
            return(ERROR);
    }
}