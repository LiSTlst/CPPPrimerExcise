/**
*
*/
#include <iostream>
#include <vector>
#include <string>
#include "OOSTK_H.h"
#include "POSTK_H.h"
#include "QUE2S_H.h"
#include "QUEIS_H.h"
#include "STACK_H.h"

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;

int main(void){
	int stage1;
	int stage2;
	bool flag1, flag2;
	flag1 = 1;
	flag2 = 1;
	vector<POSTK> POSTKS;
	while (flag1) {
		cout << "请选择要进入的程序" << endl;
		cout << "1:POSTK" << endl;
		cout << "2:OOSTK" << endl;
		cout << "3:STACK" << endl;
		cout << "4:UQE2S" << endl;
		cout << "5:QUEIS" << endl;
		cout << "0:退出主程序" << endl;
		if (cin >> stage1) {
			switch (stage1)
			{
			case 1:
				cout << "----------您已经进入ＰＯＳＴＫ程序--------" << endl;
				cout << "-----------请输入您想要运行的操作---------" << endl;
				cout << "1：初始化栈           2：压栈" << endl;
				cout << "3：使用栈初始化栈     4：输出容量" << endl;
				cout << "5：输出元素个数       6：输出特定位置元素值" << endl;
				cout << "7：pop               8：用栈赋值" << endl;
				cout << "9：打印              10：销毁" << endl;
				cout << "0：退出" << endl;
				while (flag2){
					if (cin >> stage2) {
						POSTK a, b;
						//之所以不把aOrb定义为一个POSTK类型是因为在下面对aOrb进行赋值的时候不能用一个未经初始化的类直接赋值给这个类，但是使用引用可以(注意：引用一旦被初始化就不能再被赋值)
						char chosed;
						int e = 0;
						int costumeDefineSize;
						switch (stage2)
						{
						case 1:
							cout << "现在有两个栈可以被初始化，您要您要进行初始化的栈a还是b" << endl;
							if(cin >> chosed){
								switch (chosed)
								{
								case 'a':
									if(cin>>costumeDefineSize){
										initPOSTK(a, costumeDefineSize);
										cout << "操作成功生成了POSTK类型的变量" << chosed <<"，容量为"<<costumeDefineSize<< endl;
									}
									else{
										cout << "请按照说明输入" << endl;
									}
									break;
								case 'b':
									if (cin >> costumeDefineSize) {
										initPOSTK(b, costumeDefineSize);
										cout << "操作成功生成了POSTK类型的变量" << chosed << "，容量为" << costumeDefineSize << endl;
									}
								default:
									break;
								}
							}
							else {
								cout << "请按照说明输入（因为没有按照说明操做，所以这里默认定义为初始化a）" << endl;
							}
							cout << "请输入初始化栈的长度" << endl;

							break;
						case 2:
							cout << "您要对哪一个栈进行压栈" << endl;
							cin >> chosed;
							if (chosed == 'a') {
								cout << "好" << endl;
								aOrb = a;
								cout << "你选择了a" << endl;
							}
							else if (chosed == 'b') {
								cout << "好" << endl;
								aOrb = b;
								cout << "你选择了b" << endl;
							}
							else {
								cout << "请按照说明输入（因为没有按照说明操做，所以这里默认定义为初始化a）" << endl;
							}
							cout << "请输入您要压进栈的元素的值" << endl;
							cin >> e;
							push(&aOrb, e);
							cout << "操作成功，向a中压入元素，值为1" << endl;
							break;
						case 3:
							initPOSTK(&aOrb, a);
							cout << "操作成功，使用a将POSTK类型变量b初始化" << endl;
							break;
						case 4:
							size(&aOrb);
							cout << "操作成功，输出a的容量" << endl;
							break;
						case 5:
							howMany(&aOrb);
							cout << "操作成功，输出a中元素的个数" << endl;
							break;
						case 6:
							getelem(&aOrb, 2);
							cout << "操作成功，输出第某某位置的元素值" << endl;
							break;
						case 7:
							pop(&aOrb, e);
							cout << "操作成功，弹出a的最后一位元素" << endl;
							break;
						case 8:
							assign(&aOrb, a);
							cout << "操作成功，使用a对b进行赋值" << endl;
							break;
						case 9:
							print(&aOrb);
							cout << "操作成功，打印出a中所有的元素" << endl;
							break;
						case 10:
							destroyPOSTK(&aOrb);
							cout << "操作成功，销毁栈a" << endl;
							break;
						case 0:
							flag2 = 0;
							break;
						default:
							cout << "请按照指示进行输入" << endl;
							break;
						}
					}
					else {
						cout << "请按照指示选择操作" << endl;
					}
				}
			case 2:
				break;
			case 3:
				break;
			case 4:
				break;
			case 5:
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
}

