#include "Replace.hpp"
#include "printError.hpp"

int Replace::OpenCreateWrite(std::string &filename)
{
    setFilename(filename);
    if (openFile())
        return (ERROR);
    else
    {
        if (!setContentFromFile())
            return(ERROR);
    }
    return (0);
}

void Replace::setFilename(std::string filename)
{
    _fileName = filename;
}

std::string Replace::getFileName(void)
{
    return (_fileName);
}

int Replace::openFile()
{
    std::string filename = getFileName();
    _fin.open(filename);
        if (!_fin.is_open())
            return (printError(ERROR_OPEN_FILE));
        else
            return (0);
}

bool Replace::setContentFromFile(void)
{
    std::string strTmpContent;
    std::string buffStr;
    if (!_fin)
    {
        printError(ERROR_INPUT_STREAM);
        return (false);
    }
    while (std::getline(_fin, buffStr))
    {
        
        strTmpContent += buffStr;
        if (!_fin.eof())
            strTmpContent += "\n";
    }
    if (strTmpContent.length() == 0)
    {
        printError(ERROR_EMPTY_FILE);
        return (false);
    }
    _fin.close();
    _fileContent = strTmpContent;
    return (true);
}

std::string Replace::getFileContent(void)
{
    return (_fileContent);
}

bool Replace::replace(std::string replacedStr, std::string replacemedStr)
{
    std::string tmpStr;
    size_t lenReplace = replacedStr.length();

    if (replacedStr.empty() || replacemedStr.empty())
    {
        printError(ERROR_EMPTY_STR);
        return (true);
    }
    tmpStr = getFileContent();
    for (size_t len = 0; len < tmpStr.length(); len++)
    {
        if (tmpStr.compare(len, lenReplace, replacedStr) == 0)
        {
            tmpStr.erase(len, lenReplace);
            tmpStr.insert(len, replacemedStr);
            len +=replacemedStr.length() - 1;
        }
    }
    setOutputFinalStr(tmpStr);
    return (false);
}

std::string     Replace::getOutputFinalStr(void)
{
    return (_outputFinalStr);
}

void Replace::setOutputFinalStr(std::string str)
{
    _outputFinalStr = str;
}

bool    Replace::finalWriteToFile()
{
    std::string strOut = getOutputFinalStr();
    _fout.open(_fileName + ".replace", std::ios::out);
    if (_fout.fail())
    {
        printError(ERROR_CREATE_FILE);
        return (true);
    }
    _fout << strOut;
    _fout.close();
    return (false);
}

Replace::Replace(){}

Replace::~Replace(){}
