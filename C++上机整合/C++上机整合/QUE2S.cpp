#include <iostream>
#include "QUE2S_H.h"

using namespace std;

//初始化队列：每栈最多m个元素
QUE2S::QUE2S(int m) :s1(m), s2(m) {}

//用队列q拷贝构造新队列
QUE2S::QUE2S(const QUE2S &q) : s1(q.s1), s2(q.s2) {}

//返回队列的实际元素个数
QUE2S::operator int() const {
	return (int)s1;
}

//将e入队列，并返回当前队列
QUE2S& QUE2S::operator<<(int e) {
	if((int)s1 < s1.size()){
		s1 << e;
	}
	else {
		cout << "This que is fulled alredy" << endl;
	}
	return *this;
}

//出队列到e，并返回当前队列

QUE2S& QUE2S::operator >> (int &e) {
	if((int)s1>0){
		int temp = 0;
		for (int i = 0; i < (int)s1; i++) {
			s1 >> temp;
			s2 << temp;
		}
		s2 >> e;
		for (int i = 0; i < (int)s2; i++) {
			s2 >> temp;
			s1 << temp;
		}
	}
	else {
		cout << "This que is empty" << endl;
	}
	return *this;
}

//赋q给当前队列并返回该队列
QUE2S& QUE2S::operator=(const QUE2S &q) {
	s1 = q.s1;
	s2 = q.s2;
	return *this;
}

//打印队列
void QUE2S::print()const {
	s1.print();
}

//销毁队列
QUE2S::~QUE2S(){}