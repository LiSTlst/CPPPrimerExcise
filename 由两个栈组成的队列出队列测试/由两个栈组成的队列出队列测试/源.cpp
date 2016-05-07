/*

#include <iostream>


using namespace std;

class STACK {
	int  *const  elems;						//�����ڴ����ڴ��ջ��Ԫ��
	const  int   max;						//ջ�ܴ�ŵ����Ԫ�ظ���
	int   pos;								//ջʵ������Ԫ�ظ�����ջ��ʱpos=0;
public:
	STACK(int m);							//��ʼ��ջ�����m��Ԫ��
	STACK(const STACK&s); 					//��ջs������ʼ��ջ
	virtual int  size() const;				//����ջ�����Ԫ�ظ���max
	virtual operator int() const;			//����ջ��ʵ��Ԫ�ظ���pos
	virtual int operator[ ] (int x) const;	//ȡ�±�x����ջԪ��
	virtual STACK& operator<<(int e); 		//��e��ջ�������ص�ǰջ
	virtual STACK& operator >> (int &e);	//��ջ��e�������ص�ǰջ
	virtual STACK& operator=(const STACK&s);//��s����ǰջ�����ظ�ջ
	virtual void print() const;				//��ӡջ
	virtual ~STACK();						//����ջ
};


class QUE2S {
public:
	STACK s1, s2;							//һ�����п�������ջ�ۺ϶���
	int x = 0;
	QUE2S(int m);							//��ʼ�����У�ÿջ���m��Ԫ��
	QUE2S(const QUE2S &q);					//�ö���q���������¶���
	operator int() const;					//���ض��е�ʵ��Ԫ�ظ���
	QUE2S& operator<<(int e); 				//��e����У������ص�ǰ����
	QUE2S& operator >> (int &e);			//�����е�e�������ص�ǰ����
	QUE2S& operator=(const QUE2S &q);		//��q����ǰ���в����ظö���
	void print() const;						//��ӡ����
	~QUE2S();								//���ٶ���
};


STACK::STACK(int m) :elems(new int[m]), max(m) {
	pos = 0;
}

//��ջs������ʼ��ջ
STACK::STACK(const STACK&s) : elems(new int[s.max]), max(s.max) {
	pos = s.pos;
	int i = 0;
	for (i = 0; i<pos; i++) {
		elems[i] = s.elems[i];
	}
}

//����ջ�����Ԫ�ظ���
int STACK::size()const {
	return max;
}

//����ջ��ʵ�ʵ�Ԫ�ظ���
STACK::operator int() const {
	return pos;
}

//�����±�Ϊx��Ԫ��
int STACK::operator [](int x) const {
	if (0 <= x && x<pos) {
		return elems[x];
	}
	else {
		std::cout << "The number you want to get is not exist" << std::endl;
		return 0;
	}
}

//ѹ��ջ
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

//����ջ
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

//��s��ֵ����ǰջ�������ظ�ջ
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

//��ӡ��ǰջ
void STACK::print() const {
	for (int i = 0; i<pos; i++) {
		std::cout << elems[i] << std::endl;
	}
}

//����ջ
STACK::~STACK() {
	if (elems) {
		delete(elems);
		pos = 0;
		*(int *)(&max) = 0;
		cout << "����ջ1" << endl;
	}
	cout << "����ջ2" << endl;
}

//��ʼ�����У�ÿջ���m��Ԫ��
QUE2S::QUE2S(int m) :s1(m), s2(m) {}

//�ö���q���������¶���
QUE2S::QUE2S(const QUE2S &q) : s1(q.s1), s2(q.s2) {}

//���ض��е�ʵ��Ԫ�ظ���
QUE2S::operator int() const {
	return (int)s1;
}

//��e����У������ص�ǰ����
QUE2S& QUE2S::operator<<(int e) {
	if ((int)s1 < s1.size()) {
		s1 << e;
	}
	else {
		cout << "This que is fulled alredy" << endl;
	}
	return *this;
}

//�����е�e�������ص�ǰ����

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

//��q����ǰ���в����ظö���
QUE2S& QUE2S::operator=(const QUE2S &q) {
	s1 = q.s1;
	s2 = q.s2;
	return *this;
}

//��ӡ����
void QUE2S::print()const {
	s1.print();
}

//���ٶ���
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
	int  *const  elems;						//�����ڴ����ڴ��ջ��Ԫ��
	const  int   max;						//ջ�ܴ�ŵ����Ԫ�ظ���
	int   pos;								//ջʵ������Ԫ�ظ�����ջ��ʱpos=0;
public:
	STACK(int m);							//��ʼ��ջ�����m��Ԫ��
	virtual int  size() const;				//����ջ�����Ԫ�ظ���max
	virtual operator int() const;			//����ջ��ʵ��Ԫ�ظ���pos
	virtual STACK& operator << (int e); 	//��e��ջ�������ص�ǰջ
	virtual STACK& operator >> (int &e);	//��ջ��e�������ص�ǰջ
	virtual void print() const;				//��ӡջ
	virtual ~STACK();						//����ջ
};

class QUEIS : public  STACK {					//STACK��Ϊ���ɶ��еĵ�1��ջ
	STACK  s;									//s��Ϊ���ɶ��еĵ�2��ջ
public:
	QUEIS(int m);								//��ʼ�����У�ÿջ���m��Ԫ��
	virtual operator int() const;				//���ض��е�ʵ��Ԫ�ظ���
	virtual QUEIS& operator << (int e); 			//��e����У������ص�ǰ����
	virtual QUEIS& operator >> (int &e);		//�����е�e�������ص�ǰ����
	virtual void print() const;					//��ӡ����
	virtual ~QUEIS();							//���ٶ���
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
	cout<<"���Ƴɹ�"<<endl;
	return (int)(*que);
	*/
	return (int)((STACK)(*this));
}

QUEIS& QUEIS::operator<<(int e) {
	STACK *que = this;
	cout << "��STACK���͵�ָ��ָ��this" << endl;
	int que_size = ((STACK)(*que)).size();
	cout << "�����Ƿ�����������˶�����" << endl;
	cout << que_size << endl;
	if ((int)(STACK)(*que)<que_size) {
		cout << "����ѭ����" << endl;
		((STACK)(*que)) << e;
		cout << (int)(*que) << endl;
	}
	else {
		cout << "This que is fulled already" << endl;
	}
	cout << "����н���" << endl;
	return *this;
}

QUEIS& QUEIS::operator >> (int &e) {
	if ((int)(*this) > 0) {
		int temp = 0;
		int que_size = (int)(*this);
		cout << "���еĳ���" << que_size << endl;
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
	cout << "ǿ��ת��ǰ��������" << ((STACK)x).size() << endl;
	cout << "ǿ��ת�����������" << x.size() << endl;
	cout << "STACK����ָ����ʾ�Ķ�������" << (*que).size() << endl;
	x << 1;
	cout << "ǿ��ת��ǰ�Ķ���Ԫ�ظ���" << (int)x << endl;
	cout << "ǿ��ת����Ķ���Ԫ�ظ���" << (int)(STACK)x << endl;
	cout << "STACK����ָ����ʾ�Ķ���Ԫ�ظ���" << (int)(*que) << endl;

	return 0;
}
