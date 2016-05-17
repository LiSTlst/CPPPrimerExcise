#include <iostream>

using namespace std;

double absx(int x) {//求绝对值
	if (x < 0) {
		return -x;
	}
	else
	{
		return x;
	}
}

double average(double x, double y) {//求两个数的平均值
	return ((x + y) / 2);
}

int good_enough(double guess, int x) {//判断所猜测的数字是否已经足够逼近真实数值
	if (abs(guess - x / guess) < 0.001) {
		return 1;
	}
	else
	{
		return 0;
	}
}

double improve(double guess, int x) {//进一步逼近真实数值
	return average(guess, (x / guess));
}

int try_guess(double guess, int x) {//对数值进行求职
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

double sqrtx(int x) {//对数值x求开方
	return try_guess(1, x);
}


int main() {
	int x=9;
	cout << x << "的开方是" << sqrtx(x) << endl;
	return 0;
}