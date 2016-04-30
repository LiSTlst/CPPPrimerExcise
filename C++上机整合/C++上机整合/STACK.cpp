#include <iostream>
#include "STACK_H.h"

//��ʼ��ջ�����m��Ԫ��
STACK::STACK(int m) :elems(new int[m]), max(m) {
	pos = 0;
}

//��ջs������ʼ��ջ
STACK::STACK(const STACK&s) : elems(new int[s.max]), max(s.max) {
	pos = s.pos;
	int i = 0;
	for (i = 0; i<pos; i++) {
		elems[i] = s.elems[i];
	}
}

//����ջ�����Ԫ�ظ���
int STACK::size()const {
	return max;
}

//����ջ��ʵ�ʵ�Ԫ�ظ���
STACK::operator int() const {
	return pos;
}

//�����±�Ϊx��Ԫ��
int STACK::operator [](int x) const {
	if (0 <=x && x<pos) {
		return elems[x];
	}
	else {
		std::cout << "The number you want to get is not exist" << std::endl;
		return 0;
	}
}

//ѹ��ջ
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

//����ջ
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

//��s��ֵ����ǰջ�������ظ�ջ
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

//��ӡ��ǰջ
void STACK::print() const {
	for (int i = 0; i<pos; i++) {
		std::cout << elems[i] << std::endl;
	}
}

//����ջ
STACK::~STACK() {
	delete(elems);
	pos = 0;
	*(int *)(&max) = 0;
}