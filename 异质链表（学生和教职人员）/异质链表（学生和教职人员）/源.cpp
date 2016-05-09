#include <iostream>
#include <string.h>

using namespace std;

class person {
	char* name=NULL;
	int age = 0;
	int aboundid = 0;
	person* pre = NULL;
	person* next = NULL;
public:
	person* getpreone() {
		return pre;
	}
	person* getnextone() {
		return next;
	}
	void insert_Node(person &);
	void delete_Node();
	void virtual print();
	person(char*name, int age, int aboundid);
	~person();
};

class student :public person {
	int grade = 0;
	int score = 0;
public:
	void virtual print();
	student(char*,int,int,int,int);
	~student();
};

class teacher :public person {
	int  salary = 0;
	char* direction=NULL;
public:
	void virtual print();
	teacher(char*,int,int,int,char*);
	~teacher();
};

person::person(char* name, int age, int aboundid) {
	(this->name) = new char[strlen(name)+1];
	if (this->name) {
		for (int i = 0; i < strlen(name)+1; i++) {
			this->name[i] = name[i];
		}
	}
	else {
		cout << "内存分配失败" << endl;
	}
	this->age = age;
	this->aboundid = aboundid;
}

student::student(char*name, int age, int aboundid,int grade,int score):person(name, age, aboundid) {
	this->grade = grade;
	this->score = score;
}

teacher::teacher(char*name, int age, int aboundid, int salary, char* direction) : person(name, age, aboundid) {
	this->direction = new char[strlen(direction) + 1];
	if (this->direction) {
		for (int i = 0; i < strlen(direction)+1; i++) {
			this->direction[i] = direction[i];
		}
	}
	else
	{
		cout << "内存分配失败" << endl;
	}
	this->salary = salary;
}

void person::insert_Node(person &newperson) {
	person* temp = next;
	next = &newperson;
	newperson.next = temp;
	newperson.pre = this;
	if (temp) {
		temp->pre = &newperson;
	}
}

void person::delete_Node() {
	if (this->pre) {
		(this->pre)->next = this->next;
	}
	(this->next)->pre = this->pre;
	this->~person();
}

void person::print() {
	cout <<"姓名："<< name <<",年龄："<< age <<",社会保险号："<< aboundid << endl;
}

void student::print() {
	(*this).person::print();
	cout << "年级：" << grade << ",平均分" << score <<endl;
}

void teacher::print() {
	(*this).person::print();
	cout << "薪水：" << salary << ",研究方向" << direction << endl;
}


person::~person() {
	if (name) {
		delete(name);
		name = NULL;
	}
	next = NULL;
	age = 0;
	aboundid = 0;
}

student::~student() {
	grade = 0;
	score = 0;
}

teacher::~teacher() {
	if (direction) {
		delete direction;
		direction = NULL;
	}
	salary = 0;
}

int main() {
	student li("list", 12, 12, 12, 12);
	li.print();
	teacher c("ma", 12, 12, 12, "C++");
	c.print();
	li.insert_Node(c);
	(*(li.getnextone())).print();
	li.delete_Node();
	return 0;
}