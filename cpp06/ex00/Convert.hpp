#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>
#include <ostream>
#include <iomanip>
#include <cstring>
#include <cmath>
#include <limits>
#include <sstream>
#include <string>
#include <cctype>

class Convert
{
private:
	int _int;
	float _float;
	double _double;
	char _char;
	char* _src;
public:
	Convert();
	~Convert();
	Convert(Convert const& ref);
	Convert(char* src);
	Convert& operator=(Convert const& ref);

	int getInt() const;
	float getFloat() const;
	double getDouble() const;
	char getChar() const;
	char* getSrc() const;

	void	toInt();
	void 	toFloat();
	void 	toChar();
	void 	convertAll();

	class Exception : public std::exception {
		virtual const char* mess() const throw();
	};
};
std::ostream& operator<<(std::ostream& o, const Convert& Convert);
#endif //CPP06_CONVERT_HPP
