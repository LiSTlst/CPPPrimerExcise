//��һ���������ͱ������ʱ�򣬼��������ڲ�û���κ����ݺͲ�����ϵͳ���ǻ��������һ��byte�Ŀռ䡣
//��һ�������ж������麯���������ڴ�ռ��ͷ���ͻ���һ��VFT����ָʾ�麯�������
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