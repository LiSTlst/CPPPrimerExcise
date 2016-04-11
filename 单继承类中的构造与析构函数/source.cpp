#include <iostream>
using std::cout;

class A{
	int a;
public:
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
	B(int v):b(v),y(b+2),x(b+1),d(b),A(v){//初始化的时候不是按照这里排列的顺序，而是根据优先级来决定的
		c=v;		                      //（同一优先级的按照声明的顺序来进行初始化）
		cout<<b<<c<<d;					  //这里显式初始化z,z按照缺省无参声明
		cout<<"C";
	}
	~B(){
		cout<<"D";
	}
};
void main(){
	B z(1);
}