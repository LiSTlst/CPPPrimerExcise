#include <iostream>
/**
*主要是为了检验基类指针指向派生类的条件
*目前通过实验得出的结论是
*1、在派生类中基类的指针可以指向派生类，不论是在派生类的函数成员中还是直接在派生类中定义
*2、即使是在基类的友元函数当中，也不能将基类指针指向派生类
*上面的两点和老师的说法有点出入
*老师：
*1、在派生类函数成员内部，基类指针可以直接指向该派生类对象，即对
*/
class VEHICLE {
	int speed, weight, wheels;
public:
	VEHICLE(int speed, int weight, int wheels) :speed(speed), weight(weight), wheels(wheels) {};
	friend void main();
};
class CAR :private VEHICLE {
	int seats;
	VEHICLE *ptr = this;
public:
	VEHICLE *who();
	CAR(int speed, int weight, int seats) :VEHICLE(speed, weight, 4), seats(seats) {};
};
VEHICLE *CAR::who() {
	VEHICLE*p = this;
	VEHICLE&q = *this;
	return p;
}
void main(void) {
	CAR c(1,2,3);
	VEHICLE*p = &c;
	VEHICLE &q = c;
	std::cout << sizeof(int) << std::endl;
	std::cout << sizeof(VEHICLE) << std::endl;
	std::cout << sizeof(CAR) << std::endl;
	std::cout << sizeof(c) << std::endl;
	getchar();
}