#include <iostream>
#include "STACK_H.h"

//初始化栈：最多m个元素
STACK::STACK(int m) :elems(new int[m]), max(m) {
	pos = 0;
}

//用栈s拷贝初始化栈
STACK::STACK(const STACK&s) : elems(new int[s.max]), max(s.max) {
	pos = s.pos;
	int i = 0;
	for (i = 0; i<pos; i++) {
		elems[i] = s.elems[i];
	}
}

//返回栈的最大元素个数
int STACK::size()const {
	return max;
}

//返回栈中实际的元素个数
STACK::operator int() const {
	return pos;
}

//返回下标为x的元素
int STACK::operator [](int x) const {
	if (0 <=x && x<pos) {
		return elems[x];
	}
	else {
		std::cout << "The number you want to get is not exist" << std::endl;
		return 0;
	}
}

//压入栈
STACK& STACK::operator <<(int e) {
	if ((pos + 1) <= max) {
		pos++;
		elems[pos - 1] = e;
	}
	else {
		std::cout << "This stack is fulled already." << std::endl;
	}
	return *this;
}

//弹出栈
STACK& STACK::operator >> (int &e) {
	if (pos>0) {
		e = elems[pos - 1];
		pos--;
	}
	else {
		std::cout << "This stack is empty already." << std::endl;
	}
	return *this;
}

//把s赋值给当前栈，并返回该栈
STACK& STACK::operator =(const STACK&s) {
	delete(this->elems);
	int **pelems = (int **)&elems;
	int *pmax = (int *)&max;
	*pmax = s.max;
	*pelems = new int[*pmax];
	this->pos = s.pos;
	for (int i = 0; i<this->pos; i++) {
		(*pelems)[i] = s.elems[i];
	}
	return *this;
}

//打印当前栈
void STACK::print() const {
	for (int i = 0; i<pos; i++) {
		std::cout << elems[i] << std::endl;
	}
}

//销毁栈
STACK::~STACK() {
	delete(elems);
	pos = 0;
	*(int *)(&max) = 0;
}