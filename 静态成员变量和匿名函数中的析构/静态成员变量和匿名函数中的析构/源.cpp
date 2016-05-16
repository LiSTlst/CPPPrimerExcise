/*
#include <iostream>

using namespace std;

struct A { A() { cout << 'A'; } };
struct B { B() { cout << 'B'; } };
struct C : A { C() { cout << 'C'; } };
struct D : virtual B, C { D() { cout << 'D'; } };
struct E : A {
	C  c;
	E() : c() { cout << 'E'; }
};
struct F : virtual B, C, D, E {
	F() { cout << 'F'; }
};
void main() {
	A  a;  cout << '\n';//A
	B  b;  cout << '\n';//B
	C  c;  cout << '\n';//AC
	D  d;  cout << '\n';//BACD
	E  e;  cout << '\n';//AACE
	F  f;  cout << '\n';//BACACDAACEF
}
*/
/*
#include <iostream>

using namespace std;

class A { static int  a = 0; protected:     int  b; public:     int  c;     A(int);     operator int(); } a(1, 2); class B : A {
	B(int);     virtual int d;     int  e; public:     A::b;     friend int operator =(B);     static B(int, int);
} b = 5;
class C : B {
public:
	int operator++(double);
};
int main() {
	int  *A::*p, i;
	i = a.a;
	i = A(4);
	i = b.c;
	p = &A::c;
	i = b;
	return;
}

#include <iostream>

using namespace std;

class A {
public:
	static int  x;
	int  y;
	A operator ++(int) { return A(x++, y++); }
	A(int x, int y) { A::x = x;  A::y = y; }
};
int A::x = 23;
void main() {
	A a(1, 2);
	cout << "a.x:" << a.x << ",a.y:" << a.y << endl;
	a++;
	cout << "a.x:" << a.x << ",a.y:" << a.y << endl;
}
*/

/*
#include <iostream>

using namespace std;

class Complex {
	int x, y;
public:
	Complex(int, int);
	Complex operator +(Complex);
	Complex operator <<()
};
*/

#include <iostream>
int main(){
	const int i = 0;
	int & j = i;
	std::cout << j << std::endl;
	return 0;
}
