/**
*QUEIS.cpp
*QUEIS�����к����Ķ���
*/

#include <iostream>
#include "QUEIS_H.h"

using namespace std;

//��ʼ�����У�ÿջ���m��Ԫ��
QUEIS::QUEIS(int m) :STACK(m), s(m) {}

//�ö���q������ʼ������
QUEIS::QUEIS(const QUEIS &q):STACK(q),s(q.s){}

//���ض��е�ʵ��Ԫ�ظ���
QUEIS::operator int() const {
	return (int)(STACK)(*this);
}

//��e����У������ص�ǰ����
QUEIS& QUEIS::operator<<(int e) {
	if ((int)(STACK)(*this)<(*this).size()) {
		(*this).STACK::operator<<(e);
	}
	else {
		cout << "This que is fulled already" << endl;
	}
	return *this;
}

//�����е�e�������ص�ǰ����
QUEIS& QUEIS::operator >> (int &e) {
	if ((int)(STACK)(*this) > 0) {
		int temp = 0;
		int s_size = (int)(STACK)(*this);
		for (int i = 0; i < s_size; i++) {
			(*this).STACK::operator >> (temp);
			s << temp;
		}
		s >> e;
		int stk_size = (int)(STACK)s;
		for (int i = 0; i < stk_size; i++) {
			s >> temp;
			(*this).STACK::operator << (temp);
		}
	}
	else {
		cout << "This que is empty" << endl;
	}
	return *this;
}

//��q�����в����ظö���
QUEIS& QUEIS::operator = (const QUEIS &q) {
	(STACK)(*this).STACK::operator=((STACK)q);
	s = q.s;
	return *this;
}

//��ӡ����
void QUEIS::print() const {
	((STACK)(*this)).print();
}

//���ٶ���
QUEIS::~QUEIS() {}
