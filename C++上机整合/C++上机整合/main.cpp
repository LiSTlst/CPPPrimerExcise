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
		cout << "��ѡ��Ҫ����ĳ���" << endl;
		cout << "1:POSTK" << endl;
		cout << "2:OOSTK" << endl;
		cout << "3:STACK" << endl;
		cout << "4:UQE2S" << endl;
		cout << "5:QUEIS" << endl;
		cout << "0:�˳�������" << endl;
		if (cin >> stage1) {
			switch (stage1)
			{
			case 1:
				cout << "----------���Ѿ�����Уϣӣԣ˳���--------" << endl;
				cout << "-----------����������Ҫ���еĲ���---------" << endl;
				cout << "1����ʼ��ջ           2��ѹջ" << endl;
				cout << "3��ʹ��ջ��ʼ��ջ     4���������" << endl;
				cout << "5�����Ԫ�ظ���       6������ض�λ��Ԫ��ֵ" << endl;
				cout << "7��pop               8����ջ��ֵ" << endl;
				cout << "9����ӡ              10������" << endl;
				cout << "0���˳�" << endl;
				while (flag2){
					if (cin >> stage2) {
						POSTK a, b;
						//֮���Բ���aOrb����Ϊһ��POSTK��������Ϊ�������aOrb���и�ֵ��ʱ������һ��δ����ʼ������ֱ�Ӹ�ֵ������࣬����ʹ�����ÿ���(ע�⣺����һ������ʼ���Ͳ����ٱ���ֵ)
						char chosed;
						int e = 0;
						int costumeDefineSize;
						switch (stage2)
						{
						case 1:
							cout << "����������ջ���Ա���ʼ������Ҫ��Ҫ���г�ʼ����ջa����b" << endl;
							if(cin >> chosed){
								switch (chosed)
								{
								case 'a':
									if(cin>>costumeDefineSize){
										initPOSTK(a, costumeDefineSize);
										cout << "�����ɹ�������POSTK���͵ı���" << chosed <<"������Ϊ"<<costumeDefineSize<< endl;
									}
									else{
										cout << "�밴��˵������" << endl;
									}
									break;
								case 'b':
									if (cin >> costumeDefineSize) {
										initPOSTK(b, costumeDefineSize);
										cout << "�����ɹ�������POSTK���͵ı���" << chosed << "������Ϊ" << costumeDefineSize << endl;
									}
								default:
									break;
								}
							}
							else {
								cout << "�밴��˵�����루��Ϊû�а���˵����������������Ĭ�϶���Ϊ��ʼ��a��" << endl;
							}
							cout << "�������ʼ��ջ�ĳ���" << endl;

							break;
						case 2:
							cout << "��Ҫ����һ��ջ����ѹջ" << endl;
							cin >> chosed;
							if (chosed == 'a') {
								cout << "��" << endl;
								aOrb = a;
								cout << "��ѡ����a" << endl;
							}
							else if (chosed == 'b') {
								cout << "��" << endl;
								aOrb = b;
								cout << "��ѡ����b" << endl;
							}
							else {
								cout << "�밴��˵�����루��Ϊû�а���˵����������������Ĭ�϶���Ϊ��ʼ��a��" << endl;
							}
							cout << "��������Ҫѹ��ջ��Ԫ�ص�ֵ" << endl;
							cin >> e;
							push(&aOrb, e);
							cout << "�����ɹ�����a��ѹ��Ԫ�أ�ֵΪ1" << endl;
							break;
						case 3:
							initPOSTK(&aOrb, a);
							cout << "�����ɹ���ʹ��a��POSTK���ͱ���b��ʼ��" << endl;
							break;
						case 4:
							size(&aOrb);
							cout << "�����ɹ������a������" << endl;
							break;
						case 5:
							howMany(&aOrb);
							cout << "�����ɹ������a��Ԫ�صĸ���" << endl;
							break;
						case 6:
							getelem(&aOrb, 2);
							cout << "�����ɹ��������ĳĳλ�õ�Ԫ��ֵ" << endl;
							break;
						case 7:
							pop(&aOrb, e);
							cout << "�����ɹ�������a�����һλԪ��" << endl;
							break;
						case 8:
							assign(&aOrb, a);
							cout << "�����ɹ���ʹ��a��b���и�ֵ" << endl;
							break;
						case 9:
							print(&aOrb);
							cout << "�����ɹ�����ӡ��a�����е�Ԫ��" << endl;
							break;
						case 10:
							destroyPOSTK(&aOrb);
							cout << "�����ɹ�������ջa" << endl;
							break;
						case 0:
							flag2 = 0;
							break;
						default:
							cout << "�밴��ָʾ��������" << endl;
							break;
						}
					}
					else {
						cout << "�밴��ָʾѡ�����" << endl;
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
				cout << "�밴��ָʾ����" << endl;
				break;
			}
		}
	}
}

