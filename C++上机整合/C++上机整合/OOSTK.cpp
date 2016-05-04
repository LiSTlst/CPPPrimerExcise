#include <iostream>
#include "OOSTK_H.h"

using namespace std;

//初始化栈：最多m个元素
OOSTK::OOSTK(int m) :elems(new int[m]), max(m) {
	pos = 0;
}

//用栈s拷贝初始化栈
OOSTK::OOSTK(const OOSTK&s) : elems(new int[s.max]), max(s.max) {
	for (int i = 0; i<s.pos; i++) {
		this->elems[i] = s.elems[i];
	}
	this->pos = s.pos;
}

//返回栈的最大元素个数max
int OOSTK::size() const {
	return max;
}

//返回栈的实际元素个数pos
int OOSTK::howMany() const {
	return pos;
}

//取下标x处的栈元素
int OOSTK::getelem(int x)const {
	return this->elems[x];
}

//将e入栈，并返回当前栈
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

//出栈到e，并返回当前栈
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

//赋s给栈，并返回被赋值的当前栈
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

//打印栈
void OOSTK::print() const {
	for (int i = 0; i<pos; i++) {
		cout << elems[i] << endl;
	}
}

//销毁栈
OOSTK::~OOSTK() {
	if (elems) {
		delete elems;
		pos = 0;
		*(int *)(&max) = 0;
		cout << "delete elems" << endl;
	}
}