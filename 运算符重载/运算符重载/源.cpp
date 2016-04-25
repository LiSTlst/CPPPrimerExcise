/**
*不能重载的运算符：sizeof（因为他不是一个运算符函数）、.、.*、::、？:
*只能重载为普通函数成员（必然有隐藏参数this） :=、->、()、[]
*不能重载为普通函数成员（静态成员函数或者非成员函数）：new、delete
*其他运算符：都不嗯呢该重载为静态函数成员，但是可以重载为普通函数成员和普通函数
*operator -();
*1.a-b;
*2.a.operator.-(b);
*重载运算符的时候最好不要使用缺省值，因为如果使用缺省值可能会让人阅读起来更加困难
重载不改变运算符的优先级和结合性
重载一般不改变运算符的操作数个数，特殊的运算符->,++,--除外
*/
#include <iostream>
class A;
int operator=(int, A&);
A& operator+=(A&, A&);
class A {
	friend int operator=(int, A&);
	static int operator()(A&, int);
	static int operator+(A&, int);
	friend A&operator+=(A&, A&);
	A& operator++();//隐藏参数this代表一个对象
};
int main() {
	
}