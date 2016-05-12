#include <iostream>

using namespace std;

class A {
	int a;
public:
	int geta() {
		return a;
	}
	A(int);
	~A();
};
A::A(int x) {
	a = x;
}
A::~A(){
	a = 0;
}

int main(void) {
	A x(1);
	A& y = x;
	y.~A();
	cout << "½áÊø³ÌĞò,x.a=" << x.geta() << endl;
	return 0;
}