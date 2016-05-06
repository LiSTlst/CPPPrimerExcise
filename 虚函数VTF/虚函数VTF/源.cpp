//当一个复杂类型被定义的时候，即便是其内部没有任何数据和操作，系统还是会给它分配一个byte的空间。
//当一个基类中定义了虚函数，在其内存空间的头部就会有一个VFT表来指示虚函数的入口
#include <iostream>

using  namespace std;

class A {
	virtual void a() {
		cout << "construct a" << endl;
	}
	virtual void b() {
		cout << "construct a" << endl;
	}
	void c() {
		cout << "deconstruct a" << endl;
	}
public:
	A() {
		a();
	}
	~A() {
		b();
	}
};

class B :A {
	void a() {
		cout << "construct b" << endl;
	}
	void b() {
		cout << "deconstruct b" << endl;
	}
	virtual void d() {}
public:
	B() {
		a();
	}
	~B() {
		b();
	}
};
class C {};
int main() {
	B x;
	cout << "size of class a " << sizeof(A) << endl;
	cout << "size of class b " << sizeof(B) << endl;
	cout << "size of class  c" << sizeof(C) << endl;
	return 0;
}