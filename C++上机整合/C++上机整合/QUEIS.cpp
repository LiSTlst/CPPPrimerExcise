/**
*QUEIS.cpp
*QUEIS程序中函数的定义
*/

#include <iostream>
#include "QUEIS_H.h"

using namespace std;

//初始化队列：每栈最多m个元素
QUEIS::QUEIS(int m):STACK(m),s(m){}

//用队列q拷贝初始化队列
QUEIS::QUEIS(const QUEIS &q):STACK(q),s(q.s){}

//返回队列的实际元素个数
QUEIS::operator int() const {
	return (int)(*this);
}

//将e入队列，并返回当前队列
QUEIS& QUEIS::operator<<(int e) {
	if ((int)(*this)<(*this).size()) {
		*this << e;
	}
	else {
		cout << "This que is fulled already" << endl;
	}
	return *this;
}

//出队列到e，并返回当前队列
QUEIS& QUEIS::operator >> (int &e) {
	if ((int)(*this) > 0) {
		int temp = 0;
		for (int i = 0; i < (int)(*this); i++) {
			*this >> temp;
			s << temp;
		}
		s >> e;
		for (int i = 0; i < (int)s; i++) {
			s >> temp;
			(*this) << temp;
		}
	}
	else {
		cout << "This que is empty" << endl;
	}
	return *this;
}

//赋q给队列并返回该队列
QUEIS& QUEIS::operator = (const QUEIS &q) {
	*this = q;
	s = q.s;
	return *this;
}

//打印队列
void QUEIS::print() const {
	(*this).print();
}

//销毁队列
QUEIS::~QUEIS() {}