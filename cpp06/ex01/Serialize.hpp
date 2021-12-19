#ifndef SERIALIZE_HPP
#define SERIALIZE_HPP

#include <string>

//#pragma pack(push, 1)
typedef struct Data
{
	std::string s1;
	int n;
	std::string s2;
}				Data;
//#pragma pack(pop)

int randomNum(void);
std::string randomStr(void);

void * serialize(void);
Data * deserialize(void *raw);

#endif
