#include <iostream>
#include "OOSTK_H.h"

using namespace std;

//��ʼ��ջ�����m��Ԫ��
OOSTK::OOSTK(int m) :elems(new int[m]), max(m) {
	pos = 0;
}

//��ջs������ʼ��ջ
OOSTK::OOSTK(const OOSTK&s) : elems(new int[s.max]), max(s.max) {
	for (int i = 0; i<s.pos; i++) {
		this->elems[i] = s.elems[i];
	}
	this->pos = s.pos;
}

//����ջ�����Ԫ�ظ���max
int OOSTK::size() const {
	return max;
}

//����ջ��ʵ��Ԫ�ظ���pos
int OOSTK::howMany() const {
	return pos;
}

//ȡ�±�x����ջԪ��
int OOSTK::getelem(int x)const {
	return this->elems[x];
}

//��e��ջ�������ص�ǰջ
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

//��ջ��e�������ص�ǰջ
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

//��s��ջ�������ر���ֵ�ĵ�ǰջ
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

//��ӡջ
void OOSTK::print() const {
	for (int i = 0; i<pos; i++) {
		cout << elems[i] << endl;
	}
}

//����ջ
OOSTK::~OOSTK() {
	if (elems) {
		delete elems;
		pos = 0;
		*(int *)(&max) = 0;
		cout << "delete elems" << endl;
	}
}