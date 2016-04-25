#include<iostream>
#include<string>
class SYMTAB;
struct SYMBOL {
	char *name; int value; SYMBOL *next; friend SYMTAB;
private:
	SYMBOL(char*s, int v, SYMBOL *n) {};
	~SYMBOL() {};
}*s;
class SYBTAB {
	SYMBOL *head;
public:
	SYMTAB() { head = 0; ~SYMTAB() {}; }
	SYMTAB *opreato
};