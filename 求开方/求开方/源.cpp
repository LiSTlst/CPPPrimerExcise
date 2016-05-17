#include <iostream>

using namespace std;

double absx(int x) {//�����ֵ
	if (x < 0) {
		return -x;
	}
	else
	{
		return x;
	}
}

double average(double x, double y) {//����������ƽ��ֵ
	return ((x + y) / 2);
}

int good_enough(double guess, int x) {//�ж����²�������Ƿ��Ѿ��㹻�ƽ���ʵ��ֵ
	if (abs(guess - x / guess) < 0.001) {
		return 1;
	}
	else
	{
		return 0;
	}
}

double improve(double guess, int x) {//��һ���ƽ���ʵ��ֵ
	return average(guess, (x / guess));
}

int try_guess(double guess, int x) {//����ֵ������ְ
	int flag = 0;
	if (good_enough(guess,x)) {
		return guess;
		flag = 1;
	}
	else
	{
		if (!flag) {
			return guess;
		}
		try_guess(improve(guess, x), x);
	}
}

double sqrtx(int x) {//����ֵx�󿪷�
	return try_guess(1, x);
}


int main() {
	int x=9;
	cout << x << "�Ŀ�����" << sqrtx(x) << endl;
	return 0;
}