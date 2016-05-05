#include <iostream>

using namespace std;

class STRING {
	char *str;
public:
	STRING(char*s = 0);
	STRING(const STRING &);
	virtual int strlen(void)const;
	virtual int strcmp(const STRING &)const;
	virtual STRING &operator+(const STRING &);
	virtual STRING &operator=(const STRING &);
	virtual STRING &operator+=(const STRING &);
	virtual operator const char *(void)const;
	virtual ~STRING(void);
};

STRING::STRING(char *s = 0) {}
STRING::STRING(const STRING &s) {
	str = new char[s.strlen() + 1];
	if (str) {
		for (int i = 0; i <= s.strlen() + 1; i++) {
			str[i] = s.str[i];
		}
	}
	else
	{
		cout << "³õÊ¼»¯Ê§°Ü" << endl;
	}
}
int STRING::strlen(void)const {
	int i;
	if (str) {
		for (i = 0; str[i] != 0; i++) {}
	}
	else
	{
		return 0;
	}
	return i;
}
int STRING::strcmp(const STRING &s)const {
	int min = ((*this).strlen() < s.strlen() ? (*this).strlen : s.strlen());
	for (int i = 0; i <= min;i++) {
		if (str[i] != s.str[i]) {
			return str[i] - s.str[i];
		}
	}
}
STRING& STRING:: operator +(const STRING &s){
	STRING x((*this).strlen()+s.strlen()+1);
}