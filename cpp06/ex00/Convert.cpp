#include "Convert.hpp"

Convert::Convert() : _int(0), _float(0), _char(0), _double(0) {}

Convert::Convert(char* src) : _char(0), _double(0), _float(0), _int(0)
{
	std::string nan = "nan";
	if (!strcmp(src, "nanf"))
	{
		src = new char(nan.length() + 1);
		strcpy(src, "nan");
	}
	if (isdigit(src[0]) || !strcmp(src, "nan") || !strcmp(src, "NaN") || \
		src[0] == '-' || src[0] == '+' || !strcmp(src, "inf") || !strcmp(src, "inff"))
	{
		try
		{
			this->_double = atof(src);
		}
		catch (std::invalid_argument)
		{
			this->_double = atof("nan");
			this->_src = new char[nan.length() + 1];
			strcpy(this->_src, "nan");
		}
		convertAll();
	}
	else
		this->_char = src[0];
	for (int i = 0; i < (int)strlen(src); i++)
		src[i] = tolower(src[i]);
	this->_src = src;
}

std::ostream& operator<<(std::ostream& o, const Convert& Convert)
{
	char* src = Convert.getSrc();
	if (!strcmp(src, "inff") || !strcmp(src, "-inff") || !strcmp(src, "+inff")
		|| !strcmp(src, "inf") || !strcmp(src, "-inf") || !strcmp(src, "+inf"))
	{
		src = new char[4];
		strcpy(src, "nan");
	}
	if (Convert.getInt() == -2147483648 && strcmp(src, "-2147483648") &&
		strcmp(src, "nan"))
	{
		src = new char[11];
		strcpy(src, "impossible");
	}
	/* char */
	if (!strcmp(src, "nan") || !strcmp(src, "impossible") || Convert.getInt()
	> 127 || Convert.getInt() < 0)
		o << "char : impossible\n";
	else if (Convert.getChar() <= 32)
		o << "char : Non displayable\n";
	else
		o << "char : '" << Convert.getChar() << "'\n";
	/* int */
	if (!strcmp(src, "nan") || !strcmp(src, "impossible"))
		o << "int : impossible\n";
	else
		o << "int : " << Convert.getInt() << std::endl;
	/* float */
	if (Convert.getFloat() == Convert.getInt())
		o << "float : " << Convert.getFloat() << ".0f\n";
	else if (!strcmp(src, "impossible"))
		o << "float : impossible\n";
	else
		o << "float : " << Convert.getFloat() << "f\n";
	/* double */
	if (Convert.getDouble() == Convert.getInt())
		o << "double : " << Convert.getDouble() << ".0\n";
	else if (!strcmp(src, "impossible"))
		o << "double : impossible\n";
	else
		o << "double : " << Convert.getDouble() << std::endl;
	return (o);
}

Convert::Convert(const Convert& ref) : _int(ref._int), _double(ref._double),
_char(ref._char), _float(ref._float), _src(ref._src)
{}

Convert::~Convert() {}

void Convert::convertAll()
{
	toInt();
	toFloat();
	toChar();
}

Convert &Convert::operator=(const Convert& ref)
{
	this->_char = ref._char;
	this->_double = ref._double;
	this->_float = ref._float;
	this->_int = ref._int;
	this->_src = ref._src;
	return(*this);
}

void Convert::toChar()
{
	this->_char = static_cast<char>(this->_double);
}

void Convert::toFloat()
{
	this->_float = static_cast<float>(this->_double);
}

void Convert::toInt()
{
	this->_int = static_cast<int>(this->_double);
}

char Convert::getChar() const
{
	return (this->_char);
}

double Convert::getDouble() const
{
	return(this->_double);
}

float Convert::getFloat() const
{
	return(this->_float);
}

int Convert::getInt() const
{
	return(this->_int);
}

char* Convert::getSrc() const
{
	return(this->_src);
}

const char* Convert::Exception::mess() const throw()
{
	return ("Exception : ");
}
