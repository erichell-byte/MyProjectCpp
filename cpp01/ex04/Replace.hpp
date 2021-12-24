#ifndef REPLACE_HPP
#define REPLACE_HPP

# include <string>
# include <iostream>
# include <fstream>

class Replace 
{
    private:
        std::string _fileName;
        std::string _replacedStr;
        std::string _replacemedStr;
        std::ifstream _fin;
        std::ofstream _fout;
        std::string _fileContent;
        std::string _outputFinalStr;

    public:
        int             OpenCreateWrite(std::string &filename);
        int             openFile(void);
        void            writeInFile(std::string str, std::ofstream fout);
        int             createFile(void);
        void            setFilename(std::string filename);
        std::string     getFileName(void);
        bool            setContentFromFile(void);
        bool            replace(std::string replacedStr, std::string replacemedStr);
        std::string     getFileContent(void);
        std::string     getOutputFinalStr(void);
        void            setOutputFinalStr(std::string str);
        bool            finalWriteToFile();
        Replace();
        ~Replace();

}   ;

#endif