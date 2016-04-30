#include <iostream>
#include "QUE2S_H.h"

using namespace std;

//��ʼ�����У�ÿջ���m��Ԫ��
QUE2S::QUE2S(int m) :s1(m), s2(m) {}

//�ö���q���������¶���
QUE2S::QUE2S(const QUE2S &q) : s1(q.s1), s2(q.s2) {}

//���ض��е�ʵ��Ԫ�ظ���
QUE2S::operator int() const {
	return (int)s1;
}

//��e����У������ص�ǰ����
QUE2S& QUE2S::operator<<(int e) {
	if((int)s1 < s1.size()){
		s1 << e;
	}
	else {
		cout << "This que is fulled alredy" << endl;
	}
	return *this;
}

//�����е�e�������ص�ǰ����

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

//��q����ǰ���в����ظö���
QUE2S& QUE2S::operator=(const QUE2S &q) {
	s1 = q.s1;
	s2 = q.s2;
	return *this;
}

//��ӡ����
void QUE2S::print()const {
	s1.print();
}

//���ٶ���
QUE2S::~QUE2S(){}