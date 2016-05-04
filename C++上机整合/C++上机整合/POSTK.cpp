#include <iostream>
#include "POSTK_H.h"

using namespace std;

//初始化p指的栈：最多m个元素
void initPOSTK(POSTK *const p, int m) {
	p->max = m;
	p->elems = (int *)malloc((p->max) * sizeof(int));
	p->pos = 0;
}

//用栈s初始化p指的栈
void initPOSTK(POSTK *const p, const POSTK&s) {
	p->elems = (int *)malloc((s.max) * sizeof(int));
	p->max = s.max;
	p->pos = s.pos;
	for (int i = 0; i<(s.pos); i++) {
		p->elems[i] = s.elems[i];
	}
}

//返回p指栈的最大元素个数max
int  size(const POSTK *const p) {
	return p->max;
}

//返回p指栈的实际元素个数pos
int  howMany(const POSTK *const p) {
	return p->pos;
}

//取下标x处的栈元素
int  getelem(const POSTK *const p, int x) {
	return (p->elems[x - 1]);
}

//将e入栈，并返回p值
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

//出栈到e，并返回p值
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

//赋s给p指的栈，返p值
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

//打印p指向的栈
void print(const POSTK*const p) {
	for (int i = 0; i<(p->pos); i++) {
		std::cout << p->elems[i] << std::endl;
	}
}

//销毁p指向的栈
void destroyPOSTK(POSTK*const p) {
	free(p->elems);
	p->max = 0;
	p->pos = 0;
}
