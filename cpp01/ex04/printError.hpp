#ifndef PRINTERROR_HPP
#define PRINTERROR_HPP

#include "Replace.hpp"

typedef enum
{
    ERROR = 1,
    ERROR_ARGS_NUM,
    ERROR_OPEN_FILE,
    ERROR_CREATE_FILE,
    ERROR_INPUT_STREAM,
    ERROR_EMPTY_STR,
    ERROR_EMPTY_FILE
} n_err;

int printError(int numError);

#endif