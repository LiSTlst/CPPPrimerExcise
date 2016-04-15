#include <iostream>

using namespace std;

class OOSTK {
	int  *const  elems;				//�����ڴ����ڴ��ջ��Ԫ��
	const  int   max;				//ջ�ܴ�ŵ����Ԫ�ظ���
	int   pos;						//ջʵ������Ԫ�ظ�����ջ��ʱpos=0;
public:
	OOSTK(int m);					//��ʼ��ջ�����m��Ԫ��
	OOSTK(const OOSTK&s);			//��ջs������ʼ��ջ
	int  size() const;				//����ջ�����Ԫ�ظ���max
	int  howMany() const;			//����ջ��ʵ��Ԫ�ظ���pos
	int  getelem(int x) const;		//ȡ�±�x����ջԪ��
	OOSTK& push(int e); 			//��e��ջ�������ص�ǰջ
	OOSTK& pop(int &e); 			//��ջ��e�������ص�ǰջ
	OOSTK& assign(const OOSTK&s); 	//��s��ջ�������ر���ֵ�ĵ�ǰջ
	void print() const;				//��ӡջ
	~OOSTK();						//����ջ
};

int main() {
	OOSTK a(20);
	a.push(1);
	a.push(2);
	a.push(3);
	a.push(4);
	cout << "push 1,2,3,4 into the stack a,stack a's size is 20" << endl;
	cout << "The size of stack a is " << a.size() << endl;
	cout << "The elems in stack a is " << a.howMany() << endl;
	cout << "The elem in the position 3 of stack a is " << a.getelem(3) << endl;
	OOSTK c(10);
	c.push(0);
	c.push(1);
	c.push(2);
	cout << "init stack c,size is 10,and push 0,1,2 into it" << endl;
	cout << "The size of stack c is " << c.size() << endl;
	cout << "The elems in stack c is " << c.howMany() << endl;
	cout << "The elem in the position 2 of stack c is " << c.getelem(2) << endl;
	OOSTK b(a);
	cout << "use stack a to init stack b" << endl;
	cout << "The size of stack b is " << b.size() << endl;
	cout << "The elems in stack b is " << b.howMany() << endl;
	cout << "The elem in the position 3 of stack b is " << b.getelem(3) << endl;
	int e = 0;
	b.pop(e);
	cout << "pop the last elem in the stack b, the elem is " << e << endl;
	c.assign(a);
	cout << "assgin a to c" << endl;
	cout << "The size of stack c is " << c.size() << endl;
	cout << "The elems in stack c is " << c.howMany() << endl;
	cout << "The elem in the position 3 of stack c is " << c.getelem(3) << endl;
	a.~OOSTK();
	b.~OOSTK();
	c.~OOSTK();
	cout << "discontroduct the stacks a,b,c" << endl;
	getchar();
	return 0;
}

OOSTK::OOSTK(int m) :elems(new int[m]), max(m) {
	pos = 0;
}
OOSTK::OOSTK(const OOSTK&s) : elems(new int[s.max]), max(s.max) {
	for (int i = 0; i<s.pos; i++) {
		this->elems[i] = s.elems[i];
	}
	this->pos = s.pos;
}
int OOSTK::size() const {
	return max;
}
int OOSTK::howMany() const {
	return pos;
}
int OOSTK::getelem(int x)const {
	return this->elems[x];
}
OOSTK& OOSTK::push(int e) {
	if (pos + 1>max) {
		cout << "This stack is full already." << endl;
	}
	else {
		elems[pos] = e;
		++pos;
	}
	return *this;
}
OOSTK& OOSTK::pop(int &e) {
	if (pos>0) {
		e = elems[pos - 1];
		--pos;
	}
	else {
		cout << "This STACK is empty already" << endl;
	}
	return *this;
}
OOSTK& OOSTK::assign(const OOSTK&s) {
	int *pmax = const_cast<int*>(&this->max);
	*pmax = s.max;
	int **pelems = const_cast<int **>(&this->elems);
	delete *pelems;
	*pelems = new int[s.max];
	this->pos = s.pos;
	for (int i = 0; i<s.pos; i++) {
		(*pelems)[i] = s.elems[i];
	}
	return *this;
}
void OOSTK::print() const {
	for (int i = 0; i<pos; i++) {
		cout << elems[i] + '\n';
	}
}
OOSTK::~OOSTK() {
	pos = 0;
	cout << "pos=0" << endl;
	if (elems) {
		delete elems;
		*(int**)(&elems) = 0;
		cout << "delete elems" << endl;
	}
}