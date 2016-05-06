#include <iostream>

using namespace std;

class A {
	virtual void c() {
		cout << "construct a\n" << endl;
	}
	virtual void d() {
		cout << "construct a\n" << endl;
	}
	virtual void e() {}
public:
	A() { c(); };
	virtual ~A() { d(); }
};
class B :A {
	virtual void c() {
		cout << "construct b\n";
	}
	virtual void d() {
		cout << "construct b\n";
	}
public:
	B() { c(); }
	virtual ~B() { d(); }
};