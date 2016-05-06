/**
*QUEIS.cpp
*QUEIS�����к����Ķ���
*/

#include <iostream>
#include "QUEIS_H.h"

using namespace std;

//��ʼ�����У�ÿջ���m��Ԫ��
QUEIS::QUEIS(int m):STACK(m),s(m){}

//�ö���q������ʼ������
QUEIS::QUEIS(const QUEIS &q):STACK(q),s(q.s){}

//���ض��е�ʵ��Ԫ�ظ���
QUEIS::operator int() const {
	return (int)(*this);
}

//��e����У������ص�ǰ����
QUEIS& QUEIS::operator<<(int e) {
	if ((int)(*this)<(*this).size()) {
		*this << e;
	}
	else {
		cout << "This que is fulled already" << endl;
	}
	return *this;
}

//�����е�e�������ص�ǰ����
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

//��q�����в����ظö���
QUEIS& QUEIS::operator = (const QUEIS &q) {
	*this = q;
	s = q.s;
	return *this;
}

//��ӡ����
void QUEIS::print() const {
	(*this).print();
}

//���ٶ���
QUEIS::~QUEIS() {}