#include <iostream>
using std::cout;

class A{
	
public:
	int a;
	A():a(8){
		cout<<a;
	}
	A(int x):a(x){
		cout<<a;
	}
	~A(){
		cout<<a;
	}
};
class B:A{
	int b,c;
	const int d;
	A x,y,z;
public:
	A::a;
	B(int v):b(v),y(b+2),x(b+1),d(b),A(v){
		c=v;
		cout<<b<<c<<d<<++A::a<<B::a;
		cout<<"C";
	}
	~B(){
		cout<<"D";
	}
};
void main(){
	B z(1);
}