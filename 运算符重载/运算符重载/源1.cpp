#include<iostream>
class A{
	int x,y;
public:
	A(int x, int y) { A::x = x; A::y = y; }
	A& operator=(const A&m)//��������Ϊ��ֵ��������ֵ���Ա��޸���ֵ
	{
		x = m.x; y = m.y; 
		return *this;
	};
	friend A operator-(const A&);//����Ĳ�����A&�����ǣ�����Ϊ�����ڽ��͵�ʱ����һ��ָ�룬����A��һ���������ʹ�õĿռ����2.���ò�����ù��캯�����������ʹ�ã��Ļ��ͻ��ڵ��ú�����ʱ��ͻ���ù��캯��
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