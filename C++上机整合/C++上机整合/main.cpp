#include <iostream>
#include "POSTK_H.h"
#include "OOSTK_H.h"
#include "STACK_H.h"
#include "QUE2S_H.h"
#include "QUEIS_H.h"

using std::cout;
using std::cin;
using std::endl;

int main(void) {
	bool flag1=1, flag2=1;						//用于判断是否退出当前阶段的表单
	int stage1, stage2;							//用于选择进入哪一个程序和操作
	int costumeDefineSize = 0;					//用户输入costumedefinesize来决定栈和队列的容量
	int e_num = 0;								//用户通过e_num来进行栈和队列的输入和输出
	char chosed0, chosed;						//用于用户对栈和队列进行选择

	POSTK a, b, c;								//三个函数式栈
	POSTK* aborc0 = NULL, *aborc = NULL;		//指代三个栈中由用户选择的某一个栈的指针
	OOSTK *d = NULL, *e = NULL, *f = NULL;		//三个面向对象的栈的指针
	OOSTK *deorf0 = NULL, *deorf = NULL;		//指代三个栈中由用户选择的某一个栈的指针
	int dflag = 0, eflag = 0, fflag = 0;		//判断栈是否已经被初始化
	STACK *g=NULL, *h=NULL, *i=NULL;			//三个面向对象的栈的指针（重定义了操作符）
	STACK *ghori0 = NULL, *ghori = NULL;		//指代三个栈中有用户选择的某一个栈的指针
	int gflag = 0, hflag = 0, iflag = 0;		//判断栈是否已经被初始化
	QUE2S *j = NULL, *k = NULL, *l = NULL;		//三个由两个栈构成的队列的指针
	QUE2S *jkorl = NULL, *jkorl0 = NULL;		//指代三个队列中由用户选择的某一个队列的指针
	int jflag = 0, kflag = 0, lflag = 0;		//判断队列是够已经被初始化
	QUEIS *m = NULL, *n = NULL, *o = NULL;		//三个继承栈的队列
	QUEIS *mnoro = NULL, *mnoro0 = NULL;		//指代三个队列中有用户选择的某一个队列的指针
	int mflag = 0, nflag = 0, oflag = 0;		//判断队列是否已经被初始化

	while (flag1) {
		cout << "请选择要进入的程序" << endl;
		cout << "1:POSTK" << '\n'
			<< "2:OOSTK" << '\n'
			<< "3:STACK" << '\n'
			<< "4:QUE2S" << '\n'
			<< "5:QUEIS" << '\n'
			<< "0:退出主程序" << endl;
		if (cin >> stage1) {
			switch (stage1)
			{
			case 1:
				cout << "----------您已经进入ＰＯＳＴＫ程序--------" << '\n'
					<< "-----------请输入您想要运行的操作---------" << '\n'
					<< "1：初始化栈           2：使用栈初始化栈" << '\n'
					<< "3：输出容量           4：输出元素个数" << '\n'
					<< "5：输出特定位置元素值  6：压栈" << '\n'
					<< "7：弹出               8：用栈赋值" << '\n'
					<< "9：打印               10：销毁" << '\n'
					<< "0：退出" << endl;
				flag2 = 1;
				while (flag2) {
					if (cin >> stage2) {
						switch (stage2)
						{
						case 1:
							cout << "您可以选择初始化栈a、b或者c" << endl;
							if (cin >> chosed) {
								if (chosed == 'a') {
									aborc = &a;
								}
								else if (chosed == 'b') {
									aborc = &b;
								}
								else if (chosed == 'c') {
									aborc = &c;
								}
								else {
									cout << "请按照说明操作，请重新选择操作" << endl;
									break;
								}
							}
							else {
								cout << "请按照说明操作，请重新选择操作" << endl;
								break;
							}
							cout << "请输入" << chosed << "的容量" << endl;
							if (cin >> costumeDefineSize) {

							}
							else
							{
								cout << "请按照说明操作，请重新选择操作" << endl;
								break;
							}
							initPOSTK(aborc, costumeDefineSize);
							cout << "初始化了栈" << chosed << "容量为" << costumeDefineSize << '\n'
								<< "请选择接下来要进行的操作" << endl;
							break;
						case 2:
							cout << "您可以使用abc中已经初始化的栈来初始化别的栈" << '\n'
								<< "请选择要用哪一个栈作为初始化模板" << endl;
							if (cin >> chosed) {
								if (chosed == 'a') {
									aborc0 = &a;
									cout << "请选择要初始化的对象" << endl;
									if (cin >> chosed0) {
										if (chosed0 == 'b') {
											aborc = &b;
										}
										else if (chosed0 == 'c') {
											aborc = &c;
										}
										else
										{
											cout << "请按照说明操作，请重新选择操作" << endl;
											break;
										}
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else if (chosed == 'b') {
									aborc0 = &b;
									cout << "请选择要初始化的对象" << endl;
									if (cin >> chosed0) {
										if (chosed0 == 'a') {
											aborc = &b;
										}
										else if (chosed0 == 'c') {
											aborc = &c;
										}
										else
										{
											cout << "请按照说明操作，请重新选择操作" << endl;
											break;
										}
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else if (chosed == 'c') {
									aborc0 = &c;
									cout << "请选择要初始化的对象" << endl;
									if (cin >> chosed0) {
										if (chosed0 == 'a') {
											aborc = &b;
										}
										else if (chosed0 == 'b') {
											aborc = &c;
										}
										else
										{
											cout << "请按照说明操作，请重新选择操作" << endl;
											break;
										}
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else
								{
									cout << "请按照说明操作，请重新选择操作" << endl;
									break;
								}
							}
							else {
								cout << "请按照说明操作，请重新选择操作" << endl;
								break;
							}
							initPOSTK(aborc, *aborc0);
							cout << "用" << chosed << "初始化了" << chosed0 << '\n'
							<< "请选择接下来要进行的操作" << endl;
							break;
						case 3:
							cout << "请选择要查看的已经初始化了的栈" << endl;
							if (cin >> chosed) {
								if (chosed == 'a') {
									aborc = &a;
								}
								else if (chosed == 'b') {
									aborc = &b;
								}
								else if (chosed == 'c') {
									aborc = &c;
								}
								else
								{
									cout << "请按照说明操作，请重新选择操作" << endl;
									break;
								}
							}
							else
							{
								cout << "请按照说明操作，请重新选择操作" << endl;
								break;
							}
							cout << chosed << "的容量是" << size(aborc) << '\n'
								<< "请选择接下来要进行的操作" << endl;
							break;
						case 4:
							cout << "请选择要查看的已经初始化了的栈" << endl;
							if (cin >> chosed) {
								if (chosed == 'a') {
									aborc = &a;
								}
								else if (chosed == 'b') {
									aborc = &b;
								}
								else if (chosed == 'c') {
									aborc = &c;
								}
								else
								{
									cout << "请按照说明操作，请重新选择操作" << endl;
									break;
								}
							}
							else
							{
								cout << "请按照说明操作，请重新选择操作" << endl;
								break;
							}
							cout << chosed << "的元素个数是" << howMany(aborc) << '\n'
								<< "请选择接下来要进行的操作" << endl;
							break;
						case 5:
							cout << "请选择要查看的已经初始化了的栈" << endl;
							if (cin >> chosed) {
								if (chosed == 'a') {
									aborc = &a;
								}
								else if (chosed == 'b') {
									aborc = &b;
								}
								else if (chosed == 'c') {
									aborc = &c;
								}
								else
								{
									cout << "请按照说明操作,请重新选择操作" << endl;
									break;
								}
							}
							else
							{
								cout << "请按照说明操作，请重新选择操作" << endl;
								break;
							}
							cout << "请输入要查看的元素位置" << endl;
							if (cin >> e_num) {
								cout << chosed << "栈" << e << "处的元素为" << getelem(aborc, e_num) << endl;
							}
							else
							{
								cout << "请按照说明操作，请重新选择操作" << endl;
								break;
							}
							cout << "请选择接下来要进行的操作" << endl;
							break;
						case 6:
							cout << "请选择要压入的栈" << endl;
							if (cin >> chosed) {
								if (chosed == 'a') {
									aborc = &a;
								}
								else if (chosed == 'b') {
									aborc = &b;
								}
								else if (chosed == 'c') {
									aborc = &c;
								}
								else
								{
									cout << "请按照说明操作，请重新选择操作" << endl;
									break;
								}
							}
							else
							{
								cout << "请按照说明操作，请重新选择操作" << endl;
								break;
							}
							cout << "请输入要压入栈的元素" << endl;
							if (cin >> e_num) {
							}
							else {
								cout << "请按照说明操作，请重新选择操作" << endl;
								break;
							}
							push(aborc, e_num);
							cout << "操作成功，将" << e_num << "压入栈" << chosed << "中" << '\n'
								<< "请选择接下来要进行的操作" << endl;
							break;
						case 7:
							cout << "请选择要弹出的栈" << endl;
							if (cin >> chosed) {
								if (chosed == 'a') {
									aborc = &a;
								}
								else if (chosed == 'b') {
									aborc = &b;
								}
								else if (chosed == 'c') {
									aborc = &c;
								}
								else
								{
									cout << "请按照说明操作，请重新选择操作" << endl;
									break;
								}
							}
							else
							{
								cout << "请按照说明操作，请重新选择操作" << endl;
								break;
							}
							pop(aborc, e_num);
							cout << "操作成功，弹出a的最后一位元素" << e_num << '\n'
								<< "请选择接下来要进行的操作" << endl;
							break;
						case 8:
							cout << "您可以使用abc中已经初始化的栈来给别的栈赋值" << '\n'
								<< "请选择要用哪一个栈作为赋值模板" << endl;
							if (cin >> chosed) {
								if (chosed == 'a') {
									aborc0 = &a;
									cout << "请选择要赋值的对象" << endl;
									if (cin >> chosed0) {
										if (chosed0 == 'b') {
											aborc = &b;
										}
										else if (chosed0 == 'c') {
											aborc = &c;
										}
										else
										{
											cout << "请按照说明操作，请重新选择操作" << endl;
											break;
										}
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else if (chosed == 'b') {
									aborc0 = &b;
									cout << "请选择要赋值的对象" << endl;
									if (cin >> chosed0) {
										if (chosed == 'a') {
											aborc = &b;
										}
										else if (chosed == 'c') {
											aborc = &c;
										}
										else
										{
											cout << "请按照说明操作,请重新选择操作" << endl;
											break;
										}
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else if (chosed == 'c') {
									aborc0 = &c;
									cout << "请选择要赋值的对象" << endl;
									if (cin >> chosed0) {
										if (chosed == 'a') {
											aborc = &b;
										}
										else if (chosed == 'b') {
											aborc = &c;
										}
										else
										{
											cout << "请按照说明操作，请重新选择操作" << endl;
											break;
										}
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else
								{
									cout << "请按照说明操作,请重新选择操作" << endl;
									break;
								}
								assign(aborc, *aborc0);
								cout << "操作成功，用" << chosed << "赋值了" << chosed0 << endl;
							}
							cout << "请选择接下来要进行的操作" << endl;
							break;
						case 9:
							cout << "请选择要打印的栈" << endl;
							if (cin >> chosed) {
								if (chosed == 'a') {
									aborc = &a;
								}
								else if (chosed == 'b') {
									aborc = &b;
								}
								else if (chosed == 'c') {
									aborc = &c;
								}
								else
								{
									cout << "请按照说明操作，请重新选择操作" << endl;
									break;
								}
							}
							else
							{
								cout << "请按照说明操作，请重新选择操作" << endl;
								break;
							}
							print(aborc);
							cout << "操作成功，打印出" << chosed << "中所有的元素" << '\n'
								<< "请选择接下来要进行的操作" << endl;
							break;
						case 10:
							cout << "请选择要销毁的栈" << endl;
							if (cin >> chosed) {
								if (chosed == 'a') {
									aborc = &a;
								}
								else if (chosed == 'b') {
									aborc = &b;
								}
								else if (chosed == 'c') {
									aborc = &c;
								}
								else
								{
									cout << "请按照说明操作，请重新选择操作" << endl;
									break;
								}
							}
							else
							{
								cout << "请按照说明操作，请重新选择操作" << endl;
								break;
							}
							destroyPOSTK(aborc);
							cout << "操作成功，销毁栈" << chosed << '\n'
								<< "请选择接下来要进行的操作" << endl;
							break;
						case 0:
							flag2 = 0;
							cout << "退出了当前程序" << endl;
							break;
						default:
							cout << "请按照说明操作，请重新选择操作" << endl;
							break;
						}
					}
					else {
						cout << "请按照指示选择操作，请重新选择操作" << endl;
						break;
					}
				}
				break;
			case 2:
				cout << "----------您已经进入OOSTK程序--------" << '\n'
					<< "-----------请输入您想要运行的操作---------" << '\n'
					<< "1：初始化栈           2：使用栈初始化栈" << '\n'
					<< "3：输出容量		     4：输出元素个数" << '\n'
					<< "5：输出特定位置元素值  6：压栈" << '\n'
					<< "7：弹出               8：用栈赋值" << '\n'
					<< "9：打印              10：销毁" << '\n'
					<< "0：退出" << endl;
				flag2 = 1;
				while (flag2) {
					if (cin >> stage2) {
						switch (stage2)
						{
						case 1:
							cout << "您可以选择初始化栈d、e或者f" << endl;
							if (cin >> chosed) {
								if (chosed == 'd') {
									cout << "请输入" << chosed << "的容量" << endl;
									if (cin >> costumeDefineSize) {
										d = new OOSTK(costumeDefineSize);
										deorf = d;
										dflag = 1;
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else if (chosed == 'e') {
									cout << "请输入" << chosed << "的容量" << endl;
									if (cin >> costumeDefineSize) {
										e = new OOSTK(costumeDefineSize);
										deorf = e;
										eflag = 1;
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else if (chosed == 'f') {
									cout << "请输入" << chosed << "的容量" << endl;
									if (cin >> costumeDefineSize) {
										f = new OOSTK(costumeDefineSize);
										deorf = f;
										fflag = 1;
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else {
									cout << "请按照说明操作，请重新选择操作" << endl;
									break;
								}
							}
							else {
								cout << "请按照说明操作，请重新选择操作" << endl;
								break;
							}
							cout << "初始化了栈" << chosed << "容量为" << costumeDefineSize << '\n'
								<< "请选择接下来要进行的操作" << endl;
							break;
						case 2:
							cout << "您可以使用def中已经初始化的栈来初始化别的栈" << '\n'
							<< "请选择要用哪一个栈作为初始化模板" << endl;
							if (cin >> chosed) {
								if (chosed == 'd') {
									if (dflag) {
										deorf0 = d;
										cout << "请选择要初始化的对象" << endl;
										if (cin >> chosed0) {
											if (chosed0 == 'e') {
												e = new OOSTK(*deorf0);
												deorf = e;
												eflag = 1;
											}
											else if (chosed0 == 'f') {
												f = new OOSTK(*deorf0);
												deorf = f;
												fflag = 1;
											}
											else
											{
												cout << "请按照说明操作，请重新选择操作" << endl;
												break;
											}
										}
										else
										{
											cout << "请按照说明操作，请重新选择操作" << endl;
											break;
										}
									}
									else {
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else if (chosed == 'e') {
									if (eflag) {
										deorf0 = e;
										cout << "请选择要初始化的对象" << endl;
										if (cin >> chosed0) {
											if (chosed0 == 'd') {
												d = new OOSTK(*deorf0);
												deorf = d;
												dflag = 1;
											}
											else if (chosed0 == 'f') {
												f = new OOSTK(*deorf0);
												deorf = f;
												fflag = 1;
											}
											else
											{
												cout << "请按照说明操作，请重新选择操作" << endl;
												break;
											}
										}
										else
										{
											cout << "请按照说明操作，请重新选择操作" << endl;
											break;
										}
									}
									else
									{
										cout << "请按照说明操作,请重新选择操作" << endl;
										break;
									}
								}
								else if (chosed == 'f') {
									if (fflag) {
										deorf0 = f;
										cout << "请选择要初始化的对象" << endl;
										if (cin >> chosed0) {
											if (chosed0 == 'd') {
												d = new OOSTK(*deorf0);
												deorf = d;
												dflag = 1;
											}
											else if (chosed0 == 'e') {
												e = new OOSTK(*deorf0);
												deorf = e;
												eflag = 1;
											}
											else
											{
												cout << "请按照说明操作，请重新选择操作" << endl;
												break;
											}
										}
										else
										{
											cout << "请按照说明操作，请重新选择操作" << endl;
											break;
										}
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else
								{
									cout << "请按照说明操作，请重新选择操作" << endl;
									break;
								}
							}
							else {
								cout << "请按照说明操作，请重新选择操作" << endl;
								break;
							}
							cout << "用" << chosed << "初始化了" << chosed0 << '\n'
								<< "请选择接下来要进行的操作" << endl;
							break;
						case 3:
							cout << "请选择要查看的已经初始化了的栈" << endl;
							if (cin >> chosed) {
								if (chosed == 'd') {
									if (dflag) {
										deorf = d;
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else if (chosed == 'e') {
									if (eflag) {
										deorf = e;
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else if (chosed == 'f') {
									if (fflag) {
										deorf = f;
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else
								{
									cout << "请按照说明操作，请重新选择操作" << endl;
									break;
								}
							}
							else
							{
								cout << "请按照说明操作，请重新选择操作" << endl;
								break;
							}
							cout << chosed << "的容量是" << (*deorf).size() << '\n'
								<< "请选择接下来要进行的操作" << endl;
							break;
						case 4:
							cout << "请选择要查看的已经初始化了的栈" << endl;
							if (cin >> chosed) {
								if (chosed == 'd') {
									if (dflag) {
										deorf = d;
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else if (chosed == 'e') {
									if (eflag) {
										deorf = e;
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else if (chosed == 'f') {
									if (fflag) {
										deorf = f;
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else
								{
									cout << "请按照说明操作，请重新选择操作" << endl;
									break;
								}
							}
							else
							{
								cout << "请按照说明操作，请重新选择操作" << endl;
								break;
							}
							cout << chosed << "的元素个数是" << (*deorf).howMany() << '\n'
								<< "请选择接下来要进行的操作" << endl;
							break;
						case 5:
							cout << "请选择要查看的已经初始化了的栈" << endl;
							if (cin >> chosed) {
								if (chosed == 'd') {
									if (dflag) {
										deorf = d;
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else if (chosed == 'e') {
									if (eflag) {
										deorf = e;
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else if (chosed == 'f') {
									if (fflag) {
										deorf = f;
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else
								{
									cout << "请按照说明操作,请重新选择操作" << endl;
									break;
								}
							}
							else
							{
								cout << "请按照说明操作，请重新选择操作" << endl;
								break;
							}
							cout << "请输入要查看的元素位置" << endl;
							if (cin >> e_num) {
								cout << chosed << "栈" << e_num << "处的元素为" << (*deorf).getelem(e_num) << endl;
							}
							else
							{
								cout << "请按照说明操作，请重新选择操作" << endl;
								break;
							}
							cout << "请选择接下来要进行的操作" << endl;
							break;
						case 6:
							cout << "请选择要压入的栈" << endl;
							if (cin >> chosed) {
								if (chosed == 'd') {
									if (dflag) {
										deorf = d;
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else if (chosed == 'e') {
									if (eflag) {
										deorf = e;
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else if (chosed == 'f') {
									if (fflag) {
										deorf = f;
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else
								{
									cout << "请按照说明操作，请重新选择操作" << endl;
									break;
								}
							}
							else
							{
								cout << "请按照说明操作，请重新选择操作" << endl;
								break;
							}
							cout << "请输入要压入栈的元素" << endl;
							if (cin >> e_num) {
							}
							else {
								cout << "请按照说明操作，请重新选择操作" << endl;
								break;
							}
							(*deorf).push(e_num);
							cout << "操作成功，将" << e_num << "压入栈" << chosed << "中" << '\n'
								<< "请选择接下来要进行的操作" << endl;
							break;
						case 7:
							cout << "请选择要弹出的栈" << endl;
							if (cin >> chosed) {
								if (chosed == 'd') {
									if (dflag) {
										deorf = d;
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else if (chosed == 'e') {
									if (eflag) {
										deorf = e;
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else if (chosed == 'f') {
									if (fflag) {
										deorf = f;
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else
								{
									cout << "请按照说明操作，请重新选择操作" << endl;
									break;
								}
							}
							else
							{
								cout << "请按照说明操作，请重新选择操作" << endl;
								break;
							}
							(*deorf).pop(e_num);
							cout << "操作成功，弹出a的最后一位元素" << e_num << '\n'
								<< "请选择接下来要进行的操作" << endl;
							break;
						case 8:
							cout << "您可以使用d、e、f中已经初始化的栈来给别的栈赋值" << '\n'
							<< "请选择要用哪一个栈作为赋值模板" << endl;
							if (cin >> chosed) {
								if (chosed == 'd') {
									if (dflag) {
										deorf0 = d;
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
									cout << "请选择要赋值的对象" << endl;
									if (cin >> chosed0) {
										if (chosed0 == 'e') {
											if (eflag) {
												deorf = e;
											}
											else
											{
												cout << "请按照说明操作，请重新选择操作" << endl;
												break;
											}
										}
										else if (chosed0 == 'f') {
											if (fflag) {
												deorf = f;
											}
											else
											{
												cout << "请按照说明操作，请重新选择操作" << endl;
												break;
											}
										}
										else
										{
											cout << "请按照说明操作，请重新选择操作" << endl;
											break;
										}
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else if (chosed == 'e') {
									if (eflag) {
										deorf0 = e;
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
									cout << "请选择要赋值的对象" << endl;
									if (cin >> chosed0) {
										if (chosed == 'd') {
											if (dflag) {
												deorf = d;
											}
											else
											{
												cout << "请按照说明操作，请重新选择操作" << endl;
												break;
											}
										}
										else if (chosed == 'f') {
											if (fflag) {
												deorf = f;
											}
											else
											{
												cout << "请按照说明操作，请重新选择操作" << endl;
												break;
											}
										}
										else
										{
											cout << "请按照说明操作,请重新选择操作" << endl;
											break;
										}
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else if (chosed == 'f') {
									if (fflag) {
										deorf0 = f;
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
									cout << "请选择要赋值的对象" << endl;
									if (cin >> chosed0) {
										if (chosed == 'd') {
											if (dflag) {
												deorf = d;
											}
											else
											{
												cout << "请按照说明操作，请重新选择操作" << endl;
												break;
											}
										}
										else if (chosed == 'e') {
											if (eflag) {
												deorf = e;
											}
											else
											{
												cout << "请按照说明操作，请重新选择操作" << endl;
												break;
											}
										}
										else
										{
											cout << "请按照说明操作，请重新选择操作" << endl;
											break;
										}
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else
								{
									cout << "请按照说明操作,请重新选择操作" << endl;
									break;
								}
								(*deorf).assign(*deorf0);
								cout << "操作成功，用" << chosed << "赋值了" << chosed0 << endl;
							}
							cout << "请选择接下来要进行的操作" << endl;
							break;
						case 9:
							cout << "请选择要打印的栈" << endl;
							if (cin >> chosed) {
								if (chosed == 'd') {
									if (dflag) {
										deorf = d;
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else if (chosed == 'e') {
									if (eflag) {
										deorf = e;
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else if (chosed == 'f') {
									if (fflag) {
										deorf = f;
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else
								{
									cout << "请按照说明操作，请重新选择操作" << endl;
									break;
								}
							}
							else
							{
								cout << "请按照说明操作，请重新选择操作" << endl;
								break;
							}
							(*deorf).print();
							cout << "操作成功，打印出" << chosed << "中所有的元素" << '\n'
								<< "请选择接下来要进行的操作" << endl;
							break;
						case 10:
							cout << "请选择要销毁已经初始化的栈" << endl;
							if (cin >> chosed) {
								if (chosed == 'd') {
									if (dflag) {
										deorf = d;
										dflag = 0;
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else if (chosed == 'e') {
									if (eflag) {
										deorf = e;
										eflag = 0;
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else if (chosed == 'f') {
									if (fflag) {
										deorf = f;
										fflag = 0;
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else
								{
									cout << "请按照说明操作，请重新选择操作" << endl;
									break;
								}
							}
							else
							{
								cout << "请按照说明操作，请重新选择操作" << endl;
								break;
							}
							(*deorf).~OOSTK();
							cout << "操作成功，销毁栈" << chosed << '\n'
								<< "请选择接下来要进行的操作" << endl;
							break;
						case 0:
							flag2 = 0;
							cout << "退出了当前程序" << endl;
							break;
						default:
							cout << "请按照说明操作，请重新选择操作" << endl;
							break;
						}
					}
					else {
						cout << "请按照指示选择操作，请重新选择操作" << endl;
						break;
					}
				}
				break;
			case 3:
				cout << "----------您已经进入STACK程序--------" << '\n'
					<< "-----------请输入您想要运行的操作---------" << '\n'
					<< "1：初始化栈           2：使用栈初始化栈" << '\n'
					<< "3：输出容量		      4：输出元素个数" << '\n'
					<< "5：输出特定位置元素值  6：压栈" << '\n'
					<< "7：弹出               8：用栈赋值" << '\n'
					<< "9：打印              10：销毁" << '\n'
					<< "0：退出" << endl;
				flag2 = 1;
				while (flag2) {
					if (cin >> stage2) {
						switch (stage2)
						{
						case 1:
							cout << "您可以选择初始化栈g、h或者i" << endl;
							if (cin >> chosed) {
								if (chosed == 'g') {
									cout << "请输入" << chosed << "的容量" << endl;
									if (cin >> costumeDefineSize) {
										g = new STACK(costumeDefineSize);
										ghori = g;
										gflag = 1;
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else if (chosed == 'h') {
									cout << "请输入" << chosed << "的容量" << endl;
									if (cin >> costumeDefineSize) {
										h = new STACK(costumeDefineSize);
										ghori = h;
										hflag = 1;
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else if (chosed == 'i') {
									cout << "请输入" << chosed << "的容量" << endl;
									if (cin >> costumeDefineSize) {
										i = new STACK(costumeDefineSize);
										ghori = i;
										iflag = 1;
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else {
									cout << "请按照说明操作，请重新选择操作" << endl;
									break;
								}
							}
							else {
								cout << "请按照说明操作，请重新选择操作" << endl;
								break;
							}
							cout << "初始化了栈" << chosed << "容量为" << costumeDefineSize << '\n'
								<< "请选择接下来要进行的操作" << endl;
							break;
						case 2:
							cout << "您可以使用g、h、i中已经初始化的栈来初始化别的栈" << '\n'
								<< "请选择要用哪一个栈作为初始化模板" << endl;
							if (cin >> chosed) {
								if (chosed == 'g') {
									if (gflag) {
										ghori0 = g;
										cout << "请选择要初始化的对象" << endl;
										if (cin >> chosed0) {
											if (chosed0 == 'h') {
												h = new STACK(*ghori0);
												ghori = h;
												hflag = 1;
											}
											else if (chosed0 == 'f') {
												i = new STACK(*ghori0);
												ghori = i;
												iflag = 1;
											}
											else
											{
												cout << "请按照说明操作，请重新选择操作" << endl;
												break;
											}
										}
										else
										{
											cout << "请按照说明操作，请重新选择操作" << endl;
											break;
										}
									}
									else {
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else if (chosed == 'h') {
									if (hflag) {
										ghori0 = h;
										cout << "请选择要初始化的对象" << endl;
										if (cin >> chosed0) {
											if (chosed0 == 'g') {
												g = new STACK(*ghori0);
												ghori = g;
												gflag = 1;
											}
											else if (chosed0 == 'i') {
												i = new STACK(*ghori0);
												ghori = i;
												iflag = 1;
											}
											else
											{
												cout << "请按照说明操作，请重新选择操作" << endl;
												break;
											}
										}
										else
										{
											cout << "请按照说明操作，请重新选择操作" << endl;
											break;
										}
									}
									else
									{
										cout << "请按照说明操作,请重新选择操作" << endl;
										break;
									}
								}
								else if (chosed == 'i') {
									if (iflag) {
										ghori0 = i;
										cout << "请选择要初始化的对象" << endl;
										if (cin >> chosed0) {
											if (chosed0 == 'g') {
												g = new STACK(*ghori0);
												ghori = g;
												gflag = 1;
											}
											else if (chosed0 == 'h') {
												h = new STACK(*ghori0);
												ghori = h;
												hflag = 1;
											}
											else
											{
												cout << "请按照说明操作，请重新选择操作" << endl;
												break;
											}
										}
										else
										{
											cout << "请按照说明操作，请重新选择操作" << endl;
											break;
										}
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else
								{
									cout << "请按照说明操作，请重新选择操作" << endl;
									break;
								}
							}
							else {
								cout << "请按照说明操作，请重新选择操作" << endl;
								break;
							}
							cout << "用" << chosed << "初始化了" << chosed0 << '\n'
								<< "请选择接下来要进行的操作" << endl;
							break;
						case 3:
							cout << "请选择要查看的已经初始化了的栈" << endl;
							if (cin >> chosed) {
								if (chosed == 'g') {
									if (gflag) {
										ghori = g;
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else if (chosed == 'h') {
									if (hflag) {
										ghori = h;
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else if (chosed == 'i') {
									if (iflag) {
										ghori = i;
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else
								{
									cout << "请按照说明操作，请重新选择操作" << endl;
									break;
								}
							}
							else
							{
								cout << "请按照说明操作，请重新选择操作" << endl;
								break;
							}
							cout << chosed << "的容量是" << (*ghori).size() << '\n'
								<< "请选择接下来要进行的操作" << endl;
							break;
						case 4:
							cout << "请选择要查看的已经初始化了的栈" << endl;
							if (cin >> chosed) {
								if (chosed == 'g') {
									if (gflag) {
										ghori = g;
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else if (chosed == 'h') {
									if (hflag) {
										ghori = h;
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else if (chosed == 'i') {
									if (iflag) {
										ghori = i;
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else
								{
									cout << "请按照说明操作，请重新选择操作" << endl;
									break;
								}
							}
							else
							{
								cout << "请按照说明操作，请重新选择操作" << endl;
								break;
							}
							cout << chosed << "的元素个数是" << (int)(*ghori) << '\n'
								<< "请选择接下来要进行的操作" << endl;
							break;
						case 5:
							cout << "请选择要查看的已经初始化了的栈" << endl;
							if (cin >> chosed) {
								if (chosed == 'g') {
									if (gflag) {
										ghori = g;
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else if (chosed == 'h') {
									if (hflag) {
										ghori = h;
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else if (chosed == 'i') {
									if (iflag) {
										ghori = i;
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else
								{
									cout << "请按照说明操作,请重新选择操作" << endl;
									break;
								}
							}
							else
							{
								cout << "请按照说明操作，请重新选择操作" << endl;
								break;
							}
							cout << "请输入要查看的元素位置" << endl;
							if (cin >> e_num) {
								cout << chosed << "栈" << e_num << "处的元素为" << (*ghori)[e_num] << endl;
							}
							else
							{
								cout << "请按照说明操作，请重新选择操作" << endl;
								break;
							}
							cout << "请选择接下来要进行的操作" << endl;
							break;
						case 6:
							cout << "请选择要压入的栈" << endl;
							if (cin >> chosed) {
								if (chosed == 'g') {
									if (gflag) {
										ghori = g;
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else if (chosed == 'h') {
									if (hflag) {
										ghori = h;
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else if (chosed == 'i') {
									if (iflag) {
										ghori = i;
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else
								{
									cout << "请按照说明操作，请重新选择操作" << endl;
									break;
								}
							}
							else
							{
								cout << "请按照说明操作，请重新选择操作" << endl;
								break;
							}
							cout << "请输入要压入队栈的元素" << endl;
							if (cin >> e_num) {
							}
							else {
								cout << "请按照说明操作，请重新选择操作" << endl;
								break;
							}
							(*ghori)<<e_num;
							cout << "操作成功，将" << e_num << "压入栈" << chosed << "中" << '\n'
								<< "请选择接下来要进行的操作" << endl;
							break;
						case 7:
							cout << "请选择要弹出的栈" << endl;
							if (cin >> chosed) {
								if (chosed == 'g') {
									if (gflag) {
										ghori = g;
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else if (chosed == 'h') {
									if (hflag) {
										ghori = h;
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else if (chosed == 'i') {
									if (iflag) {
										ghori = i;
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else
								{
									cout << "请按照说明操作，请重新选择操作" << endl;
									break;
								}
							}
							else
							{
								cout << "请按照说明操作，请重新选择操作" << endl;
								break;
							}
							(*ghori)>>e_num;
							cout << "操作成功，弹出a的最后一位元素" << e_num << '\n'
							<< "请选择接下来要进行的操作" << endl;
							break;
						case 8:
							cout << "您可以使用g、h、i中已经初始化的栈来给别的栈赋值" << '\n'
								<< "请选择要用哪一个栈作为赋值模板" << endl;
							if (cin >> chosed) {
								if (chosed == 'g') {
									if (gflag) {
										ghori0 = g;
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
									cout << "请选择要赋值的对象" << endl;
									if (cin >> chosed0) {
										if (chosed0 == 'h') {
											if (hflag) {
												ghori = h;
											}
											else
											{
												cout << "请按照说明操作，请重新选择操作" << endl;
												break;
											}
										}
										else if (chosed0 == 'i') {
											if (iflag) {
												ghori = i;
											}
											else
											{
												cout << "请按照说明操作，请重新选择操作" << endl;
												break;
											}
										}
										else
										{
											cout << "请按照说明操作，请重新选择操作" << endl;
											break;
										}
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else if (chosed == 'h') {
									if (hflag) {
										ghori0 = h;
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
									cout << "请选择要赋值的对象" << endl;
									if (cin >> chosed0) {
										if (chosed == 'g') {
											if (gflag) {
												ghori = g;
											}
											else
											{
												cout << "请按照说明操作，请重新选择操作" << endl;
												break;
											}
										}
										else if (chosed == 'i') {
											if (iflag) {
												ghori = i;
											}
											else
											{
												cout << "请按照说明操作，请重新选择操作" << endl;
												break;
											}
										}
										else
										{
											cout << "请按照说明操作,请重新选择操作" << endl;
											break;
										}
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else if (chosed == 'i') {
									if (iflag) {
										ghori0 = i;
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
									cout << "请选择要赋值的对象" << endl;
									if (cin >> chosed0) {
										if (chosed == 'g') {
											if (gflag) {
												ghori = g;
											}
											else
											{
												cout << "请按照说明操作，请重新选择操作" << endl;
												break;
											}
										}
										else if (chosed == 'h') {
											if (hflag) {
												ghori = h;
											}
											else
											{
												cout << "请按照说明操作，请重新选择操作" << endl;
												break;
											}
										}
										else
										{
											cout << "请按照说明操作，请重新选择操作" << endl;
											break;
										}
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else
								{
									cout << "请按照说明操作,请重新选择操作" << endl;
									break;
								}
								(*ghori)=(*ghori0);
								cout << "操作成功，用" << chosed << "赋值了" << chosed0 << endl;
							}
							cout << "请选择接下来要进行的操作" << endl;
							break;
						case 9:
							cout << "请选择要打印的栈" << endl;
							if (cin >> chosed) {
								if (chosed == 'g') {
									if (gflag) {
										ghori = g;
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else if (chosed == 'h') {
									if (hflag) {
										ghori = h;
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else if (chosed == 'i') {
									if (iflag) {
										ghori = i;
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else
								{
									cout << "请按照说明操作，请重新选择操作" << endl;
									break;
								}
							}
							else
							{
								cout << "请按照说明操作，请重新选择操作" << endl;
								break;
							}
							(*ghori).print();
							cout << "操作成功，打印出" << chosed << "中所有的元素" << '\n'
								<< "请选择接下来要进行的操作" << endl;
							break;
						case 10:
							cout << "请选择要销毁已经初始化的栈" << endl;
							if (cin >> chosed) {
								if (chosed == 'g') {
									if (gflag) {
										ghori = g;
										gflag = 0;
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else if (chosed == 'h') {
									if (hflag) {
										ghori = h;
										hflag = 0;
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else if (chosed == 'i') {
									if (iflag) {
										ghori = i;
										iflag = 0;
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else
								{
									cout << "请按照说明操作，请重新选择操作" << endl;
									break;
								}
							}
							else
							{
								cout << "请按照说明操作，请重新选择操作" << endl;
								break;
							}
							(*ghori).~STACK();
							cout << "操作成功，销毁栈" << chosed << '\n'
								<< "请选择接下来要进行的操作" << endl;
							break;
						case 0:
							flag2 = 0;
							cout << "退出了当前程序" << endl;
							break;
						default:
							cout << "请按照说明操作，请重新选择操作" << endl;
							break;
						}
					}
					else {
						cout << "请按照指示选择操作，请重新选择操作" << endl;
						break;
					}
				}
				break;
			case 4:
				cout << "----------您已经进入QUE2S程序--------" << '\n'
					<< "-----------请输入您想要运行的操作---------" << '\n'
					<< "1：初始化队列           2：使用队列初始化队列" << '\n'
					<< "3：输出元素个数         4：输出特定位置元素值" << '\n'
					<< "5：入队列               6：出队列" << '\n'
					<< "7：用队列赋值           8：打印" << '\n'
					<< "9：销毁                 0：退出" << endl;
				flag2 = 1;
				while (flag2) {
					if (cin >> stage2) {
						switch (stage2)
						{
						case 1:
							cout << "您可以选择初始化队列j、k或者l" << endl;
							if (cin >> chosed) {
								if (chosed == 'j') {
									cout << "请输入" << chosed << "的容量" << endl;
									if (cin >> costumeDefineSize) {
										j = new QUE2S(costumeDefineSize);
										jkorl = j;
										jflag = 1;
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else if (chosed == 'k') {
									cout << "请输入" << chosed << "的容量" << endl;
									if (cin >> costumeDefineSize) {
										k = new QUE2S(costumeDefineSize);
										jkorl = k;
										kflag = 1;
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else if (chosed == 'l') {
									cout << "请输入" << chosed << "的容量" << endl;
									if (cin >> costumeDefineSize) {
										l = new QUE2S(costumeDefineSize);
										jkorl = l;
										lflag = 1;
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else {
									cout << "请按照说明操作，请重新选择操作" << endl;
									break;
								}
							}
							else {
								cout << "请按照说明操作，请重新选择操作" << endl;
								break;
							}
							cout << "初始化了栈" << chosed << "容量为" << costumeDefineSize << '\n'
								<< "请选择接下来要进行的操作" << endl;
							break;
						case 2:
							cout << "您可以使用j、k、l中已经初始化的栈来初始化别的栈" << '\n'
								<< "请选择要用哪一个栈作为初始化模板" << endl;
							if (cin >> chosed) {
								if (chosed == 'j') {
									if (jflag) {
										jkorl0 = j;
										cout << "请选择要初始化的对象" << endl;
										if (cin >> chosed0) {
											if (chosed0 == 'k') {
												k = new QUE2S(*jkorl0);
												jkorl = k;
												kflag = 1;
											}
											else if (chosed0 == 'l') {
												l = new QUE2S(*jkorl0);
												jkorl = l;
												lflag = 1;
											}
											else
											{
												cout << "请按照说明操作，请重新选择操作" << endl;
												break;
											}
										}
										else
										{
											cout << "请按照说明操作，请重新选择操作" << endl;
											break;
										}
									}
									else {
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else if (chosed == 'k') {
									if (kflag) {
										jkorl0 = k;
										cout << "请选择要初始化的对象" << endl;
										if (cin >> chosed0) {
											if (chosed0 == 'j') {
												j = new QUE2S(*jkorl0);
												jkorl = j;
												jflag = 1;
											}
											else if (chosed0 == 'i') {
												l = new QUE2S(*jkorl0);
												jkorl = l;
												lflag = 1;
											}
											else
											{
												cout << "请按照说明操作，请重新选择操作" << endl;
												break;
											}
										}
										else
										{
											cout << "请按照说明操作，请重新选择操作" << endl;
											break;
										}
									}
									else
									{
										cout << "请按照说明操作,请重新选择操作" << endl;
										break;
									}
								}
								else if (chosed == 'i') {
									if (lflag) {
										jkorl0 = l;
										cout << "请选择要初始化的对象" << endl;
										if (cin >> chosed0) {
											if (chosed0 == 'j') {
												j = new QUE2S(*jkorl0);
												jkorl = j;
												jflag = 1;
											}
											else if (chosed0 == 'k') {
												k = new QUE2S(*jkorl0);
												jkorl = k;
												kflag = 1;
											}
											else
											{
												cout << "请按照说明操作，请重新选择操作" << endl;
												break;
											}
										}
										else
										{
											cout << "请按照说明操作，请重新选择操作" << endl;
											break;
										}
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else
								{
									cout << "请按照说明操作，请重新选择操作" << endl;
									break;
								}
							}
							else {
								cout << "请按照说明操作，请重新选择操作" << endl;
								break;
							}
							cout << "用" << chosed << "初始化了" << chosed0 << '\n'
								<< "请选择接下来要进行的操作" << endl;
							break;
						case 3:
							cout << "请选择要查看的已经初始化了的队列" << endl;
							if (cin >> chosed) {
								if (chosed == 'j') {
									if (jflag) {
										jkorl = j;
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else if (chosed == 'k') {
									if (kflag) {
										jkorl = k;
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else if (chosed == 'l') {
									if (lflag) {
										jkorl = l;
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else
								{
									cout << "请按照说明操作，请重新选择操作" << endl;
									break;
								}
							}
							else
							{
								cout << "请按照说明操作，请重新选择操作" << endl;
								break;
							}
							cout << chosed << "的元素个数是" << (int)(*jkorl) << '\n'
								<< "请选择接下来要进行的操作" << endl;
							break;
						case 4:
							cout << "请选择要查看的已经初始化了的栈" << endl;
							if (cin >> chosed) {
								if (chosed == 'j') {
									if (jflag) {
										jkorl = j;
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else if (chosed == 'k') {
									if (kflag) {
										jkorl = k;
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else if (chosed == 'l') {
									if (lflag) {
										jkorl = l;
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else
								{
									cout << "请按照说明操作,请重新选择操作" << endl;
									break;
								}
							}
							else
							{
								cout << "请按照说明操作，请重新选择操作" << endl;
								break;
							}
							cout << "请输入要查看的元素位置" << endl;
							if (cin >> e_num) {
								cout << chosed << "队列" << e_num << "处的元素为" << (*ghori)[e_num] << endl;
							}
							else
							{
								cout << "请按照说明操作，请重新选择操作" << endl;
								break;
							}
							cout << "请选择接下来要进行的操作" << endl;
							break;
						case 5:
							cout << "请选择要压入的队列" << endl;
							if (cin >> chosed) {
								if (chosed == 'j') {
									if (jflag) {
										jkorl = j;
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else if (chosed == 'k') {
									if (kflag) {
										jkorl = k;
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else if (chosed == 'l') {
									if (lflag) {
										jkorl = l;
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else
								{
									cout << "请按照说明操作，请重新选择操作" << endl;
									break;
								}
							}
							else
							{
								cout << "请按照说明操作，请重新选择操作" << endl;
								break;
							}
							cout << "请选择要入队列的元素" << endl;
							if (cin >> e_num) {
							}
							else {
								cout << "请按照说明操作，请重新选择操作" << endl;
								break;
							}
							(*jkorl) << e_num;
							cout << "操作成功，将" << e_num << "入队列" << chosed << "中" << '\n'
								<< "请选择接下来要进行的操作" << endl;
							break;
						case 6:
							cout << "请选择要出的队列" << endl;
							if (cin >> chosed) {
								if (chosed == 'j') {
									if (jflag) {
										jkorl = j;
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else if (chosed == 'k') {
									if (kflag) {
										jkorl = k;
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else if (chosed == 'l') {
									if (lflag) {
										jkorl = l;
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else
								{
									cout << "请按照说明操作，请重新选择操作" << endl;
									break;
								}
							}
							else
							{
								cout << "请按照说明操作，请重新选择操作" << endl;
								break;
							}
							(*jkorl) >> e_num;
							cout << "操作成功，出" << chosed << "的最后一位元素" << e_num << '\n'
								<< "请选择接下来要进行的操作" << endl;
							break;
						case 7:
							cout << "您可以使用j、k、l中已经初始化的队列来给别的队列赋值" << '\n'
								<< "请选择要用哪一个队列作为赋值模板" << endl;
							if (cin >> chosed) {
								if (chosed == 'j') {
									if (jflag) {
										jkorl0 = j;
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
									cout << "请选择要赋值的对象" << endl;
									if (cin >> chosed0) {
										if (chosed0 == 'k') {
											if (kflag) {
												jkorl = k;
											}
											else
											{
												cout << "请按照说明操作，请重新选择操作" << endl;
												break;
											}
										}
										else if (chosed0 == 'l') {
											if (lflag) {
												jkorl = l;
											}
											else
											{
												cout << "请按照说明操作，请重新选择操作" << endl;
												break;
											}
										}
										else
										{
											cout << "请按照说明操作，请重新选择操作" << endl;
											break;
										}
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else if (chosed == 'k') {
									if (kflag) {
										jkorl0 = k;
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
									cout << "请选择要赋值的对象" << endl;
									if (cin >> chosed0) {
										if (chosed == 'j') {
											if (jflag) {
												jkorl = j;
											}
											else
											{
												cout << "请按照说明操作，请重新选择操作" << endl;
												break;
											}
										}
										else if (chosed == 'l') {
											if (lflag) {
												jkorl = l;
											}
											else
											{
												cout << "请按照说明操作，请重新选择操作" << endl;
												break;
											}
										}
										else
										{
											cout << "请按照说明操作,请重新选择操作" << endl;
											break;
										}
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else if (chosed == 'l') {
									if (lflag) {
										jkorl0 = l;
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
									cout << "请选择要赋值的对象" << endl;
									if (cin >> chosed0) {
										if (chosed == 'j') {
											if (jflag) {
												jkorl = j;
											}
											else
											{
												cout << "请按照说明操作，请重新选择操作" << endl;
												break;
											}
										}
										else if (chosed == 'k') {
											if (kflag) {
												jkorl = k;
											}
											else
											{
												cout << "请按照说明操作，请重新选择操作" << endl;
												break;
											}
										}
										else
										{
											cout << "请按照说明操作，请重新选择操作" << endl;
											break;
										}
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else
								{
									cout << "请按照说明操作,请重新选择操作" << endl;
									break;
								}
								(*jkorl) = (*jkorl0);
								cout << "操作成功，用" << chosed << "赋值了" << chosed0 << endl;
							}
							cout << "请选择接下来要进行的操作" << endl;
							break;
						case 8:
							cout << "请选择要打印的队列" << endl;
							if (cin >> chosed) {
								if (chosed == 'j') {
									if (jflag) {
										jkorl = j;
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else if (chosed == 'k') {
									if (kflag) {
										jkorl = k;
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else if (chosed == 'l') {
									if (lflag) {
										jkorl = l;
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else
								{
									cout << "请按照说明操作，请重新选择操作" << endl;
									break;
								}
							}
							else
							{
								cout << "请按照说明操作，请重新选择操作" << endl;
								break;
							}
							(*jkorl).print();
							cout << "操作成功，打印出" << chosed << "中所有的元素" << '\n'
								<< "请选择接下来要进行的操作" << endl;
							break;
						case 9:
							cout << "请选择要销毁已经初始化的队列" << endl;
							if (cin >> chosed) {
								if (chosed == 'j') {
									if (jflag) {
										jkorl = j;
										jkorl = 0;
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else if (chosed == 'k') {
									if (kflag) {
										jkorl = k;
										kflag = 0;
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else if (chosed == 'l') {
									if (lflag) {
										jkorl = l;
										lflag = 0;
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else
								{
									cout << "请按照说明操作，请重新选择操作" << endl;
									break;
								}
							}
							else
							{
								cout << "请按照说明操作，请重新选择操作" << endl;
								break;
							}
							(*jkorl).~QUE2S();
							cout << "操作成功，销毁栈" << chosed << '\n'
								<< "请选择接下来要进行的操作" << endl;
							break;
						case 0:
							flag2 = 0;
							cout << "退出了当前程序" << endl;
							break;
						default:
							cout << "请按照说明操作，请重新选择操作" << endl;
							break;
						}
					}
					else {
						cout << "请按照指示选择操作，请重新选择操作" << endl;
						break;
					}
				}
				break;
			case 5:
				cout << "----------您已经进入QUEIS程序--------" << '\n'
					<< "-----------请输入您想要运行的操作---------" << '\n'
					<< "1：初始化队列           2：使用队列初始化队列" << '\n'
					<< "3：输出元素个数         4：输出特定位置元素值" << '\n'
					<< "5：入队列               6：出队列" << '\n'
					<< "7：用队列赋值           8：打印" << '\n'
					<< "9：销毁                 0：退出" << endl;
				flag2 = 1;
				while (flag2) {
					if (cin >> stage2) {
						switch (stage2)
						{
						case 1:
							cout << "您可以选择初始化队列m、n或者o" << endl;
							if (cin >> chosed) {
								if (chosed == 'm') {
									cout << "请输入" << chosed << "的容量" << endl;
									if (cin >> costumeDefineSize) {
										m = new QUEIS(costumeDefineSize);
										mnoro = m;
										mflag = 1;
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else if (chosed == 'n') {
									cout << "请输入" << chosed << "的容量" << endl;
									if (cin >> costumeDefineSize) {
										n = new QUEIS(costumeDefineSize);
										mnoro = n;
										nflag = 1;
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else if (chosed == 'o') {
									cout << "请输入" << chosed << "的容量" << endl;
									if (cin >> costumeDefineSize) {
										o = new QUEIS(costumeDefineSize);
										mnoro = o;
										oflag = 1;
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else {
									cout << "请按照说明操作，请重新选择操作" << endl;
									break;
								}
							}
							else {
								cout << "请按照说明操作，请重新选择操作" << endl;
								break;
							}
							cout << "初始化了栈" << chosed << "容量为" << costumeDefineSize << '\n'
								<< "请选择接下来要进行的操作" << endl;
							break;
						case 2:
							cout << "您可以使用m、n、o中已经初始化的栈来初始化别的栈" << '\n'
								<< "请选择要用哪一个栈作为初始化模板" << endl;
							if (cin >> chosed) {
								if (chosed == 'm') {
									if (mflag) {
										mnoro0 = m;
										cout << "请选择要初始化的对象" << endl;
										if (cin >> chosed0) {
											if (chosed0 == 'n') {
												n = new QUEIS(*mnoro0);
												mnoro = n;
												nflag = 1;
											}
											else if (chosed0 == 'o') {
												o = new QUEIS(*mnoro0);
												mnoro = o;
												oflag = 1;
											}
											else
											{
												cout << "请按照说明操作，请重新选择操作" << endl;
												break;
											}
										}
										else
										{
											cout << "请按照说明操作，请重新选择操作" << endl;
											break;
										}
									}
									else {
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else if (chosed == 'n') {
									if (nflag) {
										mnoro = n;
										cout << "请选择要初始化的对象" << endl;
										if (cin >> chosed0) {
											if (chosed0 == 'm') {
												m = new QUEIS(*mnoro0);
												mnoro = m;
												mflag = 1;
											}
											else if (chosed0 == 'o') {
												o = new QUEIS(*mnoro0);
												mnoro = o;
												oflag = 1;
											}
											else
											{
												cout << "请按照说明操作，请重新选择操作" << endl;
												break;
											}
										}
										else
										{
											cout << "请按照说明操作，请重新选择操作" << endl;
											break;
										}
									}
									else
									{
										cout << "请按照说明操作,请重新选择操作" << endl;
										break;
									}
								}
								else if (chosed == 'o') {
									if (oflag) {
										mnoro0 = o;
										cout << "请选择要初始化的对象" << endl;
										if (cin >> chosed0) {
											if (chosed0 == 'm') {
												m = new QUEIS(*mnoro0);
												mnoro = m;
												mflag = 1;
											}
											else if (chosed0 == 'n') {
												n = new QUEIS(*mnoro0);
												mnoro = n;
												nflag = 1;
											}
											else
											{
												cout << "请按照说明操作，请重新选择操作" << endl;
												break;
											}
										}
										else
										{
											cout << "请按照说明操作，请重新选择操作" << endl;
											break;
										}
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else
								{
									cout << "请按照说明操作，请重新选择操作" << endl;
									break;
								}
							}
							else {
								cout << "请按照说明操作，请重新选择操作" << endl;
								break;
							}
							cout << "用" << chosed << "初始化了" << chosed0 << '\n'
								<< "请选择接下来要进行的操作" << endl;
							break;
						case 3:
							cout << "请选择要查看的已经初始化了的队列" << endl;
							if (cin >> chosed) {
								if (chosed == 'm') {
									if (mflag) {
										mnoro = m;
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else if (chosed == 'n') {
									if (nflag) {
										mnoro = n;
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else if (chosed == 'o') {
									if (oflag) {
										mnoro = o;
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else
								{
									cout << "请按照说明操作，请重新选择操作" << endl;
									break;
								}
							}
							else
							{
								cout << "请按照说明操作，请重新选择操作" << endl;
								break;
							}
							cout << chosed << "的元素个数是" << (int)(*mnoro) << '\n'
								<< "请选择接下来要进行的操作" << endl;
							break;
						case 4:
							cout << "请选择要查看的已经初始化了的栈" << endl;
							if (cin >> chosed) {
								if (chosed == 'm') {
									if (mflag) {
										mnoro = m;
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else if (chosed == 'n') {
									if (nflag) {
										mnoro = m;
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else if (chosed == 'o') {
									if (oflag) {
										mnoro = o;
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else
								{
									cout << "请按照说明操作,请重新选择操作" << endl;
									break;
								}
							}
							else
							{
								cout << "请按照说明操作，请重新选择操作" << endl;
								break;
							}
							cout << "请输入要查看的元素位置" << endl;
							if (cin >> e_num) {
								cout << chosed << "队列" << e_num << "处的元素为" << (*mnoro)[e_num] << endl;
							}
							else
							{
								cout << "请按照说明操作，请重新选择操作" << endl;
								break;
							}
							cout << "请选择接下来要进行的操作" << endl;
							break;
						case 5:
							cout << "请选择要压入的队列" << endl;
							if (cin >> chosed) {
								if (chosed == 'm') {
									if (mflag) {
										mnoro = m;
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else if (chosed == 'n') {
									if (nflag) {
										mnoro = n;
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else if (chosed == 'o') {
									if (oflag) {
										mnoro = o;
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else
								{
									cout << "请按照说明操作，请重新选择操作" << endl;
									break;
								}
							}
							else
							{
								cout << "请按照说明操作，请重新选择操作" << endl;
								break;
							}
							cout << "请选择要入队列的元素" << endl;
							if (cin >> e_num) {
							}
							else {
								cout << "请按照说明操作，请重新选择操作" << endl;
								break;
							}
							(*mnoro) << e_num;
							cout << "操作成功，将" << e_num << "入队列" << chosed << "中" << '\n'
								<< "请选择接下来要进行的操作" << endl;
							break;
						case 6:
							cout << "请选择要出的队列" << endl;
							if (cin >> chosed) {
								if (chosed == 'm') {
									if (mflag) {
										mnoro = m;
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else if (chosed == 'n') {
									if (nflag) {
										mnoro = n;
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else if (chosed == 'o') {
									if (oflag) {
										mnoro = o;
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else
								{
									cout << "请按照说明操作，请重新选择操作" << endl;
									break;
								}
							}
							else
							{
								cout << "请按照说明操作，请重新选择操作" << endl;
								break;
							}
							(*mnoro) >> e_num;
							cout << "操作成功，出" << chosed << "的最后一位元素" << e_num << '\n'
								<< "请选择接下来要进行的操作" << endl;
							break;
						case 7:
							cout << "您可以使用m、n、o中已经初始化的队列来给别的队列赋值" << '\n'
								<< "请选择要用哪一个队列作为赋值模板" << endl;
							if (cin >> chosed) {
								if (chosed == 'm') {
									if (mflag) {
										mnoro0 = m;
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
									cout << "请选择要赋值的对象" << endl;
									if (cin >> chosed0) {
										if (chosed0 == 'n') {
											if (nflag) {
												mnoro = n;
											}
											else
											{
												cout << "请按照说明操作，请重新选择操作" << endl;
												break;
											}
										}
										else if (chosed0 == 'o') {
											if (oflag) {
												mnoro = o;
											}
											else
											{
												cout << "请按照说明操作，请重新选择操作" << endl;
												break;
											}
										}
										else
										{
											cout << "请按照说明操作，请重新选择操作" << endl;
											break;
										}
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else if (chosed == 'n') {
									if (nflag) {
										mnoro0 = n;
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
									cout << "请选择要赋值的对象" << endl;
									if (cin >> chosed0) {
										if (chosed == 'm') {
											if (mflag) {
												mnoro = m;
											}
											else
											{
												cout << "请按照说明操作，请重新选择操作" << endl;
												break;
											}
										}
										else if (chosed == 'o') {
											if (oflag) {
												mnoro = o;
											}
											else
											{
												cout << "请按照说明操作，请重新选择操作" << endl;
												break;
											}
										}
										else
										{
											cout << "请按照说明操作,请重新选择操作" << endl;
											break;
										}
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else if (chosed == 'o') {
									if (oflag) {
										mnoro0 = o;
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
									cout << "请选择要赋值的对象" << endl;
									if (cin >> chosed0) {
										if (chosed == 'm') {
											if (mflag) {
												mnoro = m;
											}
											else
											{
												cout << "请按照说明操作，请重新选择操作" << endl;
												break;
											}
										}
										else if (chosed == 'n') {
											if (nflag) {
												mnoro = n;
											}
											else
											{
												cout << "请按照说明操作，请重新选择操作" << endl;
												break;
											}
										}
										else
										{
											cout << "请按照说明操作，请重新选择操作" << endl;
											break;
										}
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else
								{
									cout << "请按照说明操作,请重新选择操作" << endl;
									break;
								}
								(*mnoro) = (*mnoro0);
								cout << "操作成功，用" << chosed << "赋值了" << chosed0 << endl;
							}
							cout << "请选择接下来要进行的操作" << endl;
							break;
						case 8:
							cout << "请选择要打印的队列" << endl;
							if (cin >> chosed) {
								if (chosed == 'm') {
									if (mflag) {
										mnoro = m;
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else if (chosed == 'n') {
									if (nflag) {
										mnoro = n;
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else if (chosed == 'o') {
									if (oflag) {
										mnoro = o;
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else
								{
									cout << "请按照说明操作，请重新选择操作" << endl;
									break;
								}
							}
							else
							{
								cout << "请按照说明操作，请重新选择操作" << endl;
								break;
							}
							(*mnoro).print();
							cout << "操作成功，打印出" << chosed << "中所有的元素" << '\n'
								<< "请选择接下来要进行的操作" << endl;
							break;
						case 9:
							cout << "请选择要销毁已经初始化的队列" << endl;
							if (cin >> chosed) {
								if (chosed == 'm') {
									if (mflag) {
										mnoro = m;
										jflag = 0;
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else if (chosed == 'n') {
									if (nflag) {
										mnoro = n;
										nflag = 0;
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else if (chosed == 'o') {
									if (oflag) {
										mnoro = o;
										oflag = 0;
									}
									else
									{
										cout << "请按照说明操作，请重新选择操作" << endl;
										break;
									}
								}
								else
								{
									cout << "请按照说明操作，请重新选择操作" << endl;
									break;
								}
							}
							else
							{
								cout << "请按照说明操作，请重新选择操作" << endl;
								break;
							}
							(*mnoro).~QUEIS();
							cout << "操作成功，销毁栈" << chosed << '\n'
								<< "请选择接下来要进行的操作" << endl;
							break;
						case 0:
							flag2 = 0;
							cout << "退出了当前程序" << endl;
							break;
						default:
							cout << "请按照说明操作，请重新选择操作" << endl;
							break;
						}
					}
					else {
						cout << "请按照指示选择操作，请重新选择操作" << endl;
						break;
					}
				}
				break;
			case 0:
				flag1 = 0;
				break;
			default:
				cout << "请按照指示操作" << endl;
				break;
			}
		}
	}
	return 0;
}