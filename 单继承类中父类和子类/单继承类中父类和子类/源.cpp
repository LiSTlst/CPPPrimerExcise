#include <iostream>

class POINT {
	int x, y;
public:
	int getx() {
		return x;
	}
	int gety() {
		return y;
	}
	void show() {
		std::cout << "Show a point.";
	}
	POINT(int x, int y) :x(x), y(y) {};
};
class CIRCLE :public POINT {
	int r;
public:
	int getr() {
		return r;
	}
	void show() {
		std::cout << "Show a cricle" << std::endl;
	}
	CIRCLE(int x, int y, int r) :POINT(x,y), r(r) {};
}c(1,2,3);
void main(void) {
	POINT *p = &c;
	std::cout << c.getr() << p->getx() << std::endl;
	p->show();
	CIRCLE *pc = &c;
	std::cout << pc->getr() << std::endl;
	getchar();
}