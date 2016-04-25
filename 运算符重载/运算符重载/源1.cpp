#include<iostream>
class A{
	int x,y;
public:
	A(int x, int y) { A::x = x; A::y = y; }
	A& operator=(const A&m)//返回类型为左值，即返回值可以被修改数值
	{
		x = m.x; y = m.y; 
		return *this;
	};
	friend A operator-(const A&);//这里的参数用A&而不是Ａ是因为Ａ＆在解释的时候是一个指针，但是A是一个对象，相比使用的空间更大；2.引用不会调用构造函数，但是如果使用Ａ的话就会在调用函数的时候就会调用构造函数
	friend A operator+(const A&, const A&);
}a(2, 3), b(4, 5), c(1, 9);
A operator-(const A&a) { return A(-a.x, -a.y); }
A operator+(const A&x, const A&y) {
	return A(x.x + y.x, x.y + y.y);
}
void main() { 
	(c = a + b) = b + b;
	c = -b;
}