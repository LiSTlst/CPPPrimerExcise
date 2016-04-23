#include <iostream>
#include "OOSTK_H.h"

using namespace std;

OOSTK::OOSTK(int m) :elems(new int[m]), max(m) {
	pos = 0;
}
OOSTK::OOSTK(const OOSTK&s) : elems(new int[s.max]), max(s.max) {
	for (int i = 0; i<s.pos; i++) {
		this->elems[i] = s.elems[i];
	}
	this->pos = s.pos;
}
int OOSTK::size() const {
	return max;
}
int OOSTK::howMany() const {
	return pos;
}
int OOSTK::getelem(int x)const {
	return this->elems[x];
}
OOSTK& OOSTK::push(int e) {
	if (pos + 1>max) {
		cout << "This stack is full already." << endl;
	}
	else {
		elems[pos] = e;
		++pos;
	}
	return *this;
}
OOSTK& OOSTK::pop(int &e) {
	if (pos>0) {
		e = elems[pos - 1];
		--pos;
	}
	else {
		cout << "This STACK is empty already" << endl;
	}
	return *this;
}
OOSTK& OOSTK::assign(const OOSTK&s) {
	int *pmax = const_cast<int*>(&this->max);
	*pmax = s.max;
	int **pelems = const_cast<int **>(&this->elems);
	delete *pelems;
	*pelems = new int[s.max];
	this->pos = s.pos;
	for (int i = 0; i<s.pos; i++) {
		(*pelems)[i] = s.elems[i];
	}
	return *this;
}
void OOSTK::print() const {
	for (int i = 0; i<pos; i++) {
		cout << elems[i] + '\n';
	}
}
OOSTK::~OOSTK() {
	pos = 0;
	cout << "pos=0" << endl;
	if (elems) {
		delete elems;
		*(int**)(&elems) = 0;
		cout << "delete elems" << endl;
	}
}