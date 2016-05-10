#include <iostream>
#include <string.h>

using namespace std;

class STRING {
	char* str;
public:
	STRING(char*s = 0);
	STRING(const STRING &);
	virtual int strlen(void)const;
	virtual int strcmp(const STRING &)const;
	virtual STRING &operator+(const STRING &);
	virtual STRING &operator=(const STRING &);
	virtual STRING &operator+=(const STRING &);
	virtual operator const char*(void)const;
	virtual ~STRING(void);
};

STRING::STRING(char*s) {
	str = s;
}

STRING::STRING(const STRING &s) {
	this->str = new char[s.strlen() + 1];
	if (this->str) {
		for (int i = 0; i < s.strlen() + 1; i++) {
			this->str[i] = s.str[i];
		}
	}
	else {
		cout << "ÄÚ´æ·ÖÅäÊ§°Ü" << endl;
	}
}

int STRING::strlen(void)const {
	for (int i = 0; this->str[i] != 0; i++) {
		return i;
	}
}

int STRING::strcmp(const STRING &s)const {
	int min = ((*this).strlen() < s.strlen() ? (*this).strlen() : s.strlen());
	for (int i = 0; i < min; i++) {
		if (this->str[i] > s.str[i]) {
			return 1;
		}
		else{
			if (i = min) {
				return 0;
			}
			else
			{
				return -1;
			}
		}
	}
}

STRING & STRING::operator+(const STRING &s) {
	char *new_str = new char[this->strlen() + s.strlen() + 1];
	for (int i = 0; i < this->strlen(); i++) {
		new_str[i] = this->str[i];
	}
	for (int i = this->strlen() + 1; i < (this->strlen() + s.strlen() + 1); i++) {
		new_str[i] = s.str[i];
	}
	STRING new_string(new_str);
	return new_string;
}

STRING & STRING::operator=(const STRING &s) {
	delete this->str;
	this->str = new char[s.strlen() + 1];
	if (this->str) {
		for (int i = 0; i < s.strlen() + 1; i++) {
			this->str[i] = s.str[i];
		}
	}
	else {
		cout << "ÄÚ´æ·ÖÅäÊ§°Ü" << endl;
	}
	return (*this);
}

STRING & STRING::operator+=(const STRING &s) {
	delete this->str;
	STRING x = (*this) + s;
	*this = x;
	return (*this);
}

STRING::operator const char*(void)const {
	return str;
}

STRING::~STRING(void) {
	if (this->str) {
		delete this->str;
	}
	this->str = NULL;
}

int main(void) {
	char *x = "list";
	STRING str();
   	return 0;
}