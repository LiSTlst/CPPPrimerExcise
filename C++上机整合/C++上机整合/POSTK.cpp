#include <iostream>
#include "POSTK_H.h"

using namespace std;

void initPOSTK(POSTK *const p, int m) {
	p->max = m;
	p->elems = (int *)malloc((p->max) * sizeof(int));
	p->pos = 0;
}
void initPOSTK(POSTK *const p, const POSTK&s) {
	p->elems = (int *)malloc((s.max) * sizeof(int));
	p->max = s.max;
	p->pos = s.pos;
	for (int i = 0; i<(s.pos); i++) {
		p->elems[i] = s.elems[i];
	}
}
int  size(const POSTK *const p) {
	return p->max;
}
int  howMany(const POSTK *const p) {
	return p->pos;
}
int  getelem(const POSTK *const p, int x) {
	return (p->elems[x - 1]);
}
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
POSTK *const pop(POSTK *const p, int &e) {
	e = p->elems[(p->pos) - 1];
	p->pos--;
	return p;
}
POSTK *const assign(POSTK*const p, const POSTK&s) {
	free(p->elems);
	p->pos = s.pos;
	p->elems = (int*)malloc(s.max * sizeof(int));
	p->pos = s.pos;
	for (int i = 0; i<s.pos; i++) {
		p->elems[i] = s.elems[i];
	}
	return p;
}
void print(const POSTK*const p) {
	for (int i = 0; i<(p->pos); i++) {
		std::cout << p->elems[i] << std::endl;
	}
}
void destroyPOSTK(POSTK*const p) {
	free(p->elems);
	p->max = 0;
	p->pos = 0;
}
