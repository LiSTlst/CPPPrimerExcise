#include<iostream>
#include<stdlib.h>

using std::cin;
using std::cout;
using std::endl;

struct STACK {
	int *elems;
	int max;
	int pos;
};
void initSTACK(STACK *const p, int m);
void initSTACK(STACK *const p, const STACK&s);
int  size(const STACK *const p);
int  howMany(const STACK *const p);
int  getelem(const STACK *const p, int x);
STACK *const push(STACK *const p, int e);
STACK *const pop(STACK *const p, int &e);
STACK *const assign(STACK*const p, const STACK&s);
void print(const STACK*const p);
void destroySTACK(STACK*const p);

int main(void) {
	STACK p;
	STACK s;
	initSTACK(&s, 20);
	push(&s, 1);
	push(&s, 2);
	push(&s, 3);
	push(&s, 4);
	push(&s, 5);
	initSTACK(&p, s);
	size(&p);
	howMany(&p);
	getelem(&p, 2);
	push(&p, 5);
	int e = 0;
	pop(&p, e);
	assign(&p, s);
	print(&p);
	destroySTACK(&p);
	return 0;
}

void initSTACK(STACK *const p, int m) {
	p->max = m;
	p->elems = (int *)malloc((p->max) * sizeof(int));
	p->pos = 0;
}
void initSTACK(STACK *const p, const STACK&s) {
	p->elems = (int *)malloc((s.max) * sizeof(int));
	p->max = s.max;
	p->pos = s.pos;
	for (int i = 0; i<(s.pos); i++) {
		p->elems[i] = s.elems[i];
	}
}
int  size(const STACK *const p) {
	return p->max;
}
int  howMany(const STACK *const p) {
	return p->pos;
}
int  getelem(const STACK *const p, int x) {
	return (p->elems[x - 1]);
}
STACK *const push(STACK *const p, int e) {
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
STACK *const pop(STACK *const p, int &e) {
	e = p->elems[(p->pos) - 1];
	p->pos--;
	return p;
}
STACK *const assign(STACK*const p, const STACK&s) {
	free(p->elems);
	p->pos = s.pos;
	p->elems = (int*)malloc(s.max * sizeof(int));
	p->pos = s.pos;
	for (int i = 0; i<s.pos; i++) {
		p->elems[i] = s.elems[i];
	}
	return p;
}
void print(const STACK*const p) {
	for (int i = 0; i<(p->pos); i++) {
		std::cout << p->elems[i] << std::endl;
	}
}
void destroySTACK(STACK*const p) {
	free(p->elems);
}