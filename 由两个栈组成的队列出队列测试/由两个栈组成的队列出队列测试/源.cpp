/*

#include <iostream>


using namespace std;

class STACK {
	int  *const  elems;						//申请内存用于存放栈的元素
	const  int   max;						//栈能存放的最大元素个数
	int   pos;								//栈实际已有元素个数，栈空时pos=0;
public:
	STACK(int m);							//初始化栈：最多m个元素
	STACK(const STACK&s); 					//用栈s拷贝初始化栈
	virtual int  size() const;				//返回栈的最大元素个数max
	virtual operator int() const;			//返回栈的实际元素个数pos
	virtual int operator[ ] (int x) const;	//取下标x处的栈元素
	virtual STACK& operator<<(int e); 		//将e入栈，并返回当前栈
	virtual STACK& operator >> (int &e);	//出栈到e，并返回当前栈
	virtual STACK& operator=(const STACK&s);//赋s给当前栈并返回该栈
	virtual void print() const;				//打印栈
	virtual ~STACK();						//销毁栈
};


class QUE2S {
public:
	STACK s1, s2;							//一个队列可由两个栈聚合而成
	int x = 0;
	QUE2S(int m);							//初始化队列：每栈最多m个元素
	QUE2S(const QUE2S &q);					//用队列q拷贝构造新队列
	operator int() const;					//返回队列的实际元素个数
	QUE2S& operator<<(int e); 				//将e入队列，并返回当前队列
	QUE2S& operator >> (int &e);			//出队列到e，并返回当前队列
	QUE2S& operator=(const QUE2S &q);		//赋q给当前队列并返回该队列
	void print() const;						//打印队列
	~QUE2S();								//销毁队列
};


STACK::STACK(int m) :elems(new int[m]), max(m) {
	pos = 0;
}

//用栈s拷贝初始化栈
STACK::STACK(const STACK&s) : elems(new int[s.max]), max(s.max) {
	pos = s.pos;
	int i = 0;
	for (i = 0; i<pos; i++) {
		elems[i] = s.elems[i];
	}
}

//返回栈的最大元素个数
int STACK::size()const {
	return max;
}

//返回栈中实际的元素个数
STACK::operator int() const {
	return pos;
}

//返回下标为x的元素
int STACK::operator [](int x) const {
	if (0 <= x && x<pos) {
		return elems[x];
	}
	else {
		std::cout << "The number you want to get is not exist" << std::endl;
		return 0;
	}
}

//压入栈
STACK& STACK::operator <<(int e) {
	if ((pos + 1) <= max) {
		pos++;
		elems[pos - 1] = e;
	}
	else {
		std::cout << "This stack is fulled already." << std::endl;
	}
	return *this;
}

//弹出栈
STACK& STACK::operator >> (int &e) {
	if (pos>0) {
		e = elems[pos - 1];
		pos--;
	}
	else {
		std::cout << "This stack is empty already." << std::endl;
	}
	return *this;
}

//把s赋值给当前栈，并返回该栈
STACK& STACK::operator =(const STACK&s) {
	delete(this->elems);
	int **pelems = (int **)&elems;
	int *pmax = (int *)&max;
	*pmax = s.max;
	*pelems = new int[*pmax];
	this->pos = s.pos;
	for (int i = 0; i<this->pos; i++) {
		(*pelems)[i] = s.elems[i];
	}
	return *this;
}

//打印当前栈
void STACK::print() const {
	for (int i = 0; i<pos; i++) {
		std::cout << elems[i] << std::endl;
	}
}

//销毁栈
STACK::~STACK() {
	if (elems) {
		delete(elems);
		pos = 0;
		*(int *)(&max) = 0;
		cout << "销毁栈1" << endl;
	}
	cout << "销毁栈2" << endl;
}

//初始化队列：每栈最多m个元素
QUE2S::QUE2S(int m) :s1(m), s2(m) {}

//用队列q拷贝构造新队列
QUE2S::QUE2S(const QUE2S &q) : s1(q.s1), s2(q.s2) {}

//返回队列的实际元素个数
QUE2S::operator int() const {
	return (int)s1;
}

//将e入队列，并返回当前队列
QUE2S& QUE2S::operator<<(int e) {
	if ((int)s1 < s1.size()) {
		s1 << e;
	}
	else {
		cout << "This que is fulled alredy" << endl;
	}
	return *this;
}

//出队列到e，并返回当前队列

QUE2S& QUE2S::operator >> (int &e) {
	if ((int)s1>0) {
		int temp = 0;
		int s1_size = (int)s1;
		for (int i = 0; i < s1_size; i++) {
			s1 >> temp;
			s1.print();
			s2 << temp;
			s2.print();
		}
		s2 >> e;
		int s2_size = (int)s2;
		for (int i = 0; i < s2_size; i++) {
			s2 >> temp;
			s1 << temp;
		}
	}
	else {
		cout << "This que is empty" << endl;
	}
	return *this;
}

//赋q给当前队列并返回该队列
QUE2S& QUE2S::operator=(const QUE2S &q) {
	s1 = q.s1;
	s2 = q.s2;
	return *this;
}

//打印队列
void QUE2S::print()const {
	s1.print();
}

//销毁队列
QUE2S::~QUE2S() {
	cout << "test" << endl;
}

int main(void) {
	QUE2S x(3);
	x << 1 << 2 << 3 << 4;
	int e_num;
	x >> e_num;
	cout << e_num << endl;
	x.print();
	x.~QUE2S();
	x.~QUE2S();
	getchar();
}
*/

#include <iostream>
using namespace std;

class STACK {
	int  *const  elems;						//申请内存用于存放栈的元素
	const  int   max;						//栈能存放的最大元素个数
	int   pos;								//栈实际已有元素个数，栈空时pos=0;
public:
	STACK(int m);							//初始化栈：最多m个元素
	virtual int  size() const;				//返回栈的最大元素个数max
	virtual operator int() const;			//返回栈的实际元素个数pos
	virtual STACK& operator << (int e); 	//将e入栈，并返回当前栈
	virtual STACK& operator >> (int &e);	//出栈到e，并返回当前栈
	virtual void print() const;				//打印栈
	virtual ~STACK();						//销毁栈
};

class QUEIS : public  STACK {					//STACK作为构成队列的第1个栈
	STACK  s;									//s作为构成队列的第2个栈
public:
	QUEIS(int m);								//初始化队列：每栈最多m个元素
	virtual operator int() const;				//返回队列的实际元素个数
	virtual QUEIS& operator << (int e); 			//将e入队列，并返回当前队列
	virtual QUEIS& operator >> (int &e);		//出队列到e，并返回当前队列
	virtual void print() const;					//打印队列
	virtual ~QUEIS();							//销毁队列
};

STACK::STACK(int m) :elems(new int[m]), max(m) {
	pos = 0;
}

int STACK::size()const {
	return max;
}

STACK::operator int() const {
	return pos;
}

STACK& STACK::operator <<(int e) {
	if ((pos + 1) <= max) {
		pos++;
		elems[pos - 1] = e;
		cout << elems[pos - 1] << endl;
		cout << "success" << endl;
	}
	else {
		std::cout << "This stack is fulled already." << std::endl;
	}
	return *this;
}

STACK& STACK::operator >> (int &e) {
	if (pos>0) {
		e = elems[pos - 1];
		pos--;
	}
	else {
		std::cout << "This stack is empty already." << std::endl;
	}
	return *this;
}

void STACK::print() const {
	for (int i = 0; i<pos; i++) {
		std::cout << elems[i] << std::endl;
	}
}

STACK::~STACK() {
	if (elems) {
		delete(elems);
		pos = 0;
		*(int *)(&max) = 0;
	}
}

QUEIS::QUEIS(int m) :STACK(m), s(m) {
}

QUEIS::operator int() const {
	/*
	const STACK *que=this;
	cout<<"复制成功"<<endl;
	return (int)(*que);
	*/
	return (int)((STACK)(*this));
}

QUEIS& QUEIS::operator<<(int e) {
	STACK *que = this;
	cout << "用STACK类型的指针指向this" << endl;
	int que_size = ((STACK)(*que)).size();
	cout << "测试是否是这里出现了额问题" << endl;
	cout << que_size << endl;
	if ((int)(STACK)(*que)<que_size) {
		cout << "进入循环体" << endl;
		((STACK)(*que)) << e;
		cout << (int)(*que) << endl;
	}
	else {
		cout << "This que is fulled already" << endl;
	}
	cout << "入队列结束" << endl;
	return *this;
}

QUEIS& QUEIS::operator >> (int &e) {
	if ((int)(*this) > 0) {
		int temp = 0;
		int que_size = (int)(*this);
		cout << "队列的长度" << que_size << endl;
		for (int i = 0; i < que_size; i++) {
			*this >> temp;
			s << temp;
		}
		s >> e;
		for (int i = 0; i < (int)s; i++) {
			s >> temp;
			(*this) << temp;
		}
	}
	else {
		cout << "This que is empty" << endl;
	}
	return *this;
}

void QUEIS::print() const {
	(*this).print();
}

QUEIS::~QUEIS() {}

int main() {
	QUEIS x(2);
	STACK *que = &x;
	cout << "强制转换前队列容量" << ((STACK)x).size() << endl;
	cout << "强制转换后队列容量" << x.size() << endl;
	cout << "STACK类型指针显示的队列容量" << (*que).size() << endl;
	x << 1;
	cout << "强制转换前的队列元素个数" << (int)x << endl;
	cout << "强制转换后的队列元素个数" << (int)(STACK)x << endl;
	cout << "STACK类型指针显示的队列元素个数" << (int)(*que) << endl;

	return 0;
}
