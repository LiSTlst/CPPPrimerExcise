#include <iostream>
/*
class POINT {
	int x, y;
public:
	int getx() { return x; }
	int gety() { return y; }
	virtual void show() { std::cout << "Show a point" << std::endl; }
	POINT(int x, int y) :x(x), y(y) {}
	virtual ~POINT() { x = 0; y = 0; }
};
class CIRCEL :public POINT {
	int r;
	void show() { std::cout << "Show a circle" << std::endl; }
public:
	int getr() { return r; }
	CIRCEL(int x, int y, int z) :POINT(x, y), r(r) {}
	~CIRCEL() { r = 0; }
}c(3,7,8);
void main(void) {
	CIRCEL *P = &c;
	c.~CIRCEL();
	std::cout << c.getx() << c.gety() << c.getr();
	getchar();
}
*/


class A {
	int a1;
	int a2;
public:
	A(int x, int y):a1(x),a2(y) {};
	virtual~A() {};
};
class B :public A {
	int b1;
	B(int x, int y, int z) :A(x, y), b1(z) {};
	virtual~B() {};
};