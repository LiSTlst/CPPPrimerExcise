#include <iostream>
/**
*��Ҫ��Ϊ�˼������ָ��ָ�������������
*Ŀǰͨ��ʵ��ó��Ľ�����
*1�����������л����ָ�����ָ�������࣬��������������ĺ�����Ա�л���ֱ�����������ж���
*2����ʹ���ڻ������Ԫ�������У�Ҳ���ܽ�����ָ��ָ��������
*������������ʦ��˵���е����
*��ʦ��
*1���������ຯ����Ա�ڲ�������ָ�����ֱ��ָ�����������󣬼���
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