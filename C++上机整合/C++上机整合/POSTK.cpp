#include <iostream>
#include "POSTK_H.h"

using namespace std;

//��ʼ��pָ��ջ�����m��Ԫ��
void initPOSTK(POSTK *const p, int m) {
	p->max = m;
	p->elems = (int *)malloc((p->max) * sizeof(int));
	p->pos = 0;
}

//��ջs��ʼ��pָ��ջ
void initPOSTK(POSTK *const p, const POSTK&s) {
	p->elems = (int *)malloc((s.max) * sizeof(int));
	p->max = s.max;
	p->pos = s.pos;
	for (int i = 0; i<(s.pos); i++) {
		p->elems[i] = s.elems[i];
	}
}

//����pָջ�����Ԫ�ظ���max
int  size(const POSTK *const p) {
	return p->max;
}

//����pָջ��ʵ��Ԫ�ظ���pos
int  howMany(const POSTK *const p) {
	return p->pos;
}

//ȡ�±�x����ջԪ��
int  getelem(const POSTK *const p, int x) {
	return (p->elems[x - 1]);
}

//��e��ջ��������pֵ
POSTK *const push(POSTK *const p, int e) {
	if ((p->pos + 1) <= (p->max)) {
		++p->pos;
		p->elems[(p->pos) - 1] = e;
		return p;
	}
	else {
		std::cout << "This stack is fulled aready." << std::endl;
	}
	return p;
}

//��ջ��e��������pֵ
POSTK *const pop(POSTK *const p, int &e) {
	if ((p->pos) >= 1) {
		e = p->elems[(p->pos) - 1];
		p->pos--;
	}
	else {
		cout << "This stack is empty" << endl;
	}
	return p;
}

//��s��pָ��ջ����pֵ
POSTK *const assign(POSTK*const p, const POSTK&s) {
	if (p != &s) {
		free(p->elems);
		p->pos = s.pos;
		p->elems = (int*)malloc(s.max * sizeof(int));
		p->pos = s.pos;
		for (int i = 0; i < s.pos; i++) {
			p->elems[i] = s.elems[i];
		}
	}
	else {
		cout << "you can not assign a stack by itself" << endl;
	}
	return p;
}

//��ӡpָ���ջ
void print(const POSTK*const p) {
	for (int i = 0; i<(p->pos); i++) {
		std::cout << p->elems[i] << std::endl;
	}
}

//����pָ���ջ
void destroyPOSTK(POSTK*const p) {
	free(p->elems);
	p->max = 0;
	p->pos = 0;
}
