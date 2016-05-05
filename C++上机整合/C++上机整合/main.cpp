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
	bool flag1=1, flag2=1;						//�����ж��Ƿ��˳���ǰ�׶εı�
	int stage1, stage2;							//����ѡ�������һ������Ͳ���
	int costumeDefineSize = 0;					//�û�����costumedefinesize������ջ�Ͷ��е�����
	int e_num = 0;								//�û�ͨ��e_num������ջ�Ͷ��е���������
	char chosed0, chosed;						//�����û���ջ�Ͷ��н���ѡ��

	POSTK a, b, c;								//��������ʽջ
	POSTK* aborc0 = NULL, *aborc = NULL;		//ָ������ջ�����û�ѡ���ĳһ��ջ��ָ��
	OOSTK *d = NULL, *e = NULL, *f = NULL;		//������������ջ��ָ��
	OOSTK *deorf0 = NULL, *deorf = NULL;		//ָ������ջ�����û�ѡ���ĳһ��ջ��ָ��
	int dflag = 0, eflag = 0, fflag = 0;		//�ж�ջ�Ƿ��Ѿ�����ʼ��
	STACK *g=NULL, *h=NULL, *i=NULL;			//������������ջ��ָ�루�ض����˲�������
	STACK *ghori0 = NULL, *ghori = NULL;		//ָ������ջ�����û�ѡ���ĳһ��ջ��ָ��
	int gflag = 0, hflag = 0, iflag = 0;		//�ж�ջ�Ƿ��Ѿ�����ʼ��
	QUE2S *j = NULL, *k = NULL, *l = NULL;		//����������ջ���ɵĶ��е�ָ��
	QUE2S *jkorl = NULL, *jkorl0 = NULL;		//ָ���������������û�ѡ���ĳһ�����е�ָ��
	int jflag = 0, kflag = 0, lflag = 0;		//�ж϶����ǹ��Ѿ�����ʼ��
	QUEIS *m = NULL, *n = NULL, *o = NULL;		//�����̳�ջ�Ķ���
	QUEIS *mnoro = NULL, *mnoro0 = NULL;		//ָ���������������û�ѡ���ĳһ�����е�ָ��
	int mflag = 0, nflag = 0, oflag = 0;		//�ж϶����Ƿ��Ѿ�����ʼ��

	while (flag1) {
		cout << "��ѡ��Ҫ����ĳ���" << endl;
		cout << "1:POSTK" << '\n'
			<< "2:OOSTK" << '\n'
			<< "3:STACK" << '\n'
			<< "4:QUE2S" << '\n'
			<< "5:QUEIS" << '\n'
			<< "0:�˳�������" << endl;
		if (cin >> stage1) {
			switch (stage1)
			{
			case 1:
				cout << "----------���Ѿ�����Уϣӣԣ˳���--------" << '\n'
					<< "-----------����������Ҫ���еĲ���---------" << '\n'
					<< "1����ʼ��ջ           2��ʹ��ջ��ʼ��ջ" << '\n'
					<< "3���������           4�����Ԫ�ظ���" << '\n'
					<< "5������ض�λ��Ԫ��ֵ  6��ѹջ" << '\n'
					<< "7������               8����ջ��ֵ" << '\n'
					<< "9����ӡ               10������" << '\n'
					<< "0���˳�" << endl;
				flag2 = 1;
				while (flag2) {
					if (cin >> stage2) {
						switch (stage2)
						{
						case 1:
							cout << "������ѡ���ʼ��ջa��b����c" << endl;
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
									cout << "�밴��˵��������������ѡ�����" << endl;
									break;
								}
							}
							else {
								cout << "�밴��˵��������������ѡ�����" << endl;
								break;
							}
							cout << "������" << chosed << "������" << endl;
							if (cin >> costumeDefineSize) {

							}
							else
							{
								cout << "�밴��˵��������������ѡ�����" << endl;
								break;
							}
							initPOSTK(aborc, costumeDefineSize);
							cout << "��ʼ����ջ" << chosed << "����Ϊ" << costumeDefineSize << '\n'
								<< "��ѡ�������Ҫ���еĲ���" << endl;
							break;
						case 2:
							cout << "������ʹ��abc���Ѿ���ʼ����ջ����ʼ�����ջ" << '\n'
								<< "��ѡ��Ҫ����һ��ջ��Ϊ��ʼ��ģ��" << endl;
							if (cin >> chosed) {
								if (chosed == 'a') {
									aborc0 = &a;
									cout << "��ѡ��Ҫ��ʼ���Ķ���" << endl;
									if (cin >> chosed0) {
										if (chosed0 == 'b') {
											aborc = &b;
										}
										else if (chosed0 == 'c') {
											aborc = &c;
										}
										else
										{
											cout << "�밴��˵��������������ѡ�����" << endl;
											break;
										}
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
								}
								else if (chosed == 'b') {
									aborc0 = &b;
									cout << "��ѡ��Ҫ��ʼ���Ķ���" << endl;
									if (cin >> chosed0) {
										if (chosed0 == 'a') {
											aborc = &b;
										}
										else if (chosed0 == 'c') {
											aborc = &c;
										}
										else
										{
											cout << "�밴��˵��������������ѡ�����" << endl;
											break;
										}
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
								}
								else if (chosed == 'c') {
									aborc0 = &c;
									cout << "��ѡ��Ҫ��ʼ���Ķ���" << endl;
									if (cin >> chosed0) {
										if (chosed0 == 'a') {
											aborc = &b;
										}
										else if (chosed0 == 'b') {
											aborc = &c;
										}
										else
										{
											cout << "�밴��˵��������������ѡ�����" << endl;
											break;
										}
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
								}
								else
								{
									cout << "�밴��˵��������������ѡ�����" << endl;
									break;
								}
							}
							else {
								cout << "�밴��˵��������������ѡ�����" << endl;
								break;
							}
							initPOSTK(aborc, *aborc0);
							cout << "��" << chosed << "��ʼ����" << chosed0 << '\n'
							<< "��ѡ�������Ҫ���еĲ���" << endl;
							break;
						case 3:
							cout << "��ѡ��Ҫ�鿴���Ѿ���ʼ���˵�ջ" << endl;
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
									cout << "�밴��˵��������������ѡ�����" << endl;
									break;
								}
							}
							else
							{
								cout << "�밴��˵��������������ѡ�����" << endl;
								break;
							}
							cout << chosed << "��������" << size(aborc) << '\n'
								<< "��ѡ�������Ҫ���еĲ���" << endl;
							break;
						case 4:
							cout << "��ѡ��Ҫ�鿴���Ѿ���ʼ���˵�ջ" << endl;
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
									cout << "�밴��˵��������������ѡ�����" << endl;
									break;
								}
							}
							else
							{
								cout << "�밴��˵��������������ѡ�����" << endl;
								break;
							}
							cout << chosed << "��Ԫ�ظ�����" << howMany(aborc) << '\n'
								<< "��ѡ�������Ҫ���еĲ���" << endl;
							break;
						case 5:
							cout << "��ѡ��Ҫ�鿴���Ѿ���ʼ���˵�ջ" << endl;
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
									cout << "�밴��˵������,������ѡ�����" << endl;
									break;
								}
							}
							else
							{
								cout << "�밴��˵��������������ѡ�����" << endl;
								break;
							}
							cout << "������Ҫ�鿴��Ԫ��λ��" << endl;
							if (cin >> e_num) {
								cout << chosed << "ջ" << e << "����Ԫ��Ϊ" << getelem(aborc, e_num) << endl;
							}
							else
							{
								cout << "�밴��˵��������������ѡ�����" << endl;
								break;
							}
							cout << "��ѡ�������Ҫ���еĲ���" << endl;
							break;
						case 6:
							cout << "��ѡ��Ҫѹ���ջ" << endl;
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
									cout << "�밴��˵��������������ѡ�����" << endl;
									break;
								}
							}
							else
							{
								cout << "�밴��˵��������������ѡ�����" << endl;
								break;
							}
							cout << "������Ҫѹ��ջ��Ԫ��" << endl;
							if (cin >> e_num) {
							}
							else {
								cout << "�밴��˵��������������ѡ�����" << endl;
								break;
							}
							push(aborc, e_num);
							cout << "�����ɹ�����" << e_num << "ѹ��ջ" << chosed << "��" << '\n'
								<< "��ѡ�������Ҫ���еĲ���" << endl;
							break;
						case 7:
							cout << "��ѡ��Ҫ������ջ" << endl;
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
									cout << "�밴��˵��������������ѡ�����" << endl;
									break;
								}
							}
							else
							{
								cout << "�밴��˵��������������ѡ�����" << endl;
								break;
							}
							pop(aborc, e_num);
							cout << "�����ɹ�������a�����һλԪ��" << e_num << '\n'
								<< "��ѡ�������Ҫ���еĲ���" << endl;
							break;
						case 8:
							cout << "������ʹ��abc���Ѿ���ʼ����ջ�������ջ��ֵ" << '\n'
								<< "��ѡ��Ҫ����һ��ջ��Ϊ��ֵģ��" << endl;
							if (cin >> chosed) {
								if (chosed == 'a') {
									aborc0 = &a;
									cout << "��ѡ��Ҫ��ֵ�Ķ���" << endl;
									if (cin >> chosed0) {
										if (chosed0 == 'b') {
											aborc = &b;
										}
										else if (chosed0 == 'c') {
											aborc = &c;
										}
										else
										{
											cout << "�밴��˵��������������ѡ�����" << endl;
											break;
										}
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
								}
								else if (chosed == 'b') {
									aborc0 = &b;
									cout << "��ѡ��Ҫ��ֵ�Ķ���" << endl;
									if (cin >> chosed0) {
										if (chosed == 'a') {
											aborc = &b;
										}
										else if (chosed == 'c') {
											aborc = &c;
										}
										else
										{
											cout << "�밴��˵������,������ѡ�����" << endl;
											break;
										}
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
								}
								else if (chosed == 'c') {
									aborc0 = &c;
									cout << "��ѡ��Ҫ��ֵ�Ķ���" << endl;
									if (cin >> chosed0) {
										if (chosed == 'a') {
											aborc = &b;
										}
										else if (chosed == 'b') {
											aborc = &c;
										}
										else
										{
											cout << "�밴��˵��������������ѡ�����" << endl;
											break;
										}
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
								}
								else
								{
									cout << "�밴��˵������,������ѡ�����" << endl;
									break;
								}
								assign(aborc, *aborc0);
								cout << "�����ɹ�����" << chosed << "��ֵ��" << chosed0 << endl;
							}
							cout << "��ѡ�������Ҫ���еĲ���" << endl;
							break;
						case 9:
							cout << "��ѡ��Ҫ��ӡ��ջ" << endl;
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
									cout << "�밴��˵��������������ѡ�����" << endl;
									break;
								}
							}
							else
							{
								cout << "�밴��˵��������������ѡ�����" << endl;
								break;
							}
							print(aborc);
							cout << "�����ɹ�����ӡ��" << chosed << "�����е�Ԫ��" << '\n'
								<< "��ѡ�������Ҫ���еĲ���" << endl;
							break;
						case 10:
							cout << "��ѡ��Ҫ���ٵ�ջ" << endl;
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
									cout << "�밴��˵��������������ѡ�����" << endl;
									break;
								}
							}
							else
							{
								cout << "�밴��˵��������������ѡ�����" << endl;
								break;
							}
							destroyPOSTK(aborc);
							cout << "�����ɹ�������ջ" << chosed << '\n'
								<< "��ѡ�������Ҫ���еĲ���" << endl;
							break;
						case 0:
							flag2 = 0;
							cout << "�˳��˵�ǰ����" << endl;
							break;
						default:
							cout << "�밴��˵��������������ѡ�����" << endl;
							break;
						}
					}
					else {
						cout << "�밴��ָʾѡ�������������ѡ�����" << endl;
						break;
					}
				}
				break;
			case 2:
				cout << "----------���Ѿ�����OOSTK����--------" << '\n'
					<< "-----------����������Ҫ���еĲ���---------" << '\n'
					<< "1����ʼ��ջ           2��ʹ��ջ��ʼ��ջ" << '\n'
					<< "3���������		     4�����Ԫ�ظ���" << '\n'
					<< "5������ض�λ��Ԫ��ֵ  6��ѹջ" << '\n'
					<< "7������               8����ջ��ֵ" << '\n'
					<< "9����ӡ              10������" << '\n'
					<< "0���˳�" << endl;
				flag2 = 1;
				while (flag2) {
					if (cin >> stage2) {
						switch (stage2)
						{
						case 1:
							cout << "������ѡ���ʼ��ջd��e����f" << endl;
							if (cin >> chosed) {
								if (chosed == 'd') {
									cout << "������" << chosed << "������" << endl;
									if (cin >> costumeDefineSize) {
										d = new OOSTK(costumeDefineSize);
										deorf = d;
										dflag = 1;
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
								}
								else if (chosed == 'e') {
									cout << "������" << chosed << "������" << endl;
									if (cin >> costumeDefineSize) {
										e = new OOSTK(costumeDefineSize);
										deorf = e;
										eflag = 1;
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
								}
								else if (chosed == 'f') {
									cout << "������" << chosed << "������" << endl;
									if (cin >> costumeDefineSize) {
										f = new OOSTK(costumeDefineSize);
										deorf = f;
										fflag = 1;
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
								}
								else {
									cout << "�밴��˵��������������ѡ�����" << endl;
									break;
								}
							}
							else {
								cout << "�밴��˵��������������ѡ�����" << endl;
								break;
							}
							cout << "��ʼ����ջ" << chosed << "����Ϊ" << costumeDefineSize << '\n'
								<< "��ѡ�������Ҫ���еĲ���" << endl;
							break;
						case 2:
							cout << "������ʹ��def���Ѿ���ʼ����ջ����ʼ�����ջ" << '\n'
							<< "��ѡ��Ҫ����һ��ջ��Ϊ��ʼ��ģ��" << endl;
							if (cin >> chosed) {
								if (chosed == 'd') {
									if (dflag) {
										deorf0 = d;
										cout << "��ѡ��Ҫ��ʼ���Ķ���" << endl;
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
												cout << "�밴��˵��������������ѡ�����" << endl;
												break;
											}
										}
										else
										{
											cout << "�밴��˵��������������ѡ�����" << endl;
											break;
										}
									}
									else {
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
								}
								else if (chosed == 'e') {
									if (eflag) {
										deorf0 = e;
										cout << "��ѡ��Ҫ��ʼ���Ķ���" << endl;
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
												cout << "�밴��˵��������������ѡ�����" << endl;
												break;
											}
										}
										else
										{
											cout << "�밴��˵��������������ѡ�����" << endl;
											break;
										}
									}
									else
									{
										cout << "�밴��˵������,������ѡ�����" << endl;
										break;
									}
								}
								else if (chosed == 'f') {
									if (fflag) {
										deorf0 = f;
										cout << "��ѡ��Ҫ��ʼ���Ķ���" << endl;
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
												cout << "�밴��˵��������������ѡ�����" << endl;
												break;
											}
										}
										else
										{
											cout << "�밴��˵��������������ѡ�����" << endl;
											break;
										}
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
								}
								else
								{
									cout << "�밴��˵��������������ѡ�����" << endl;
									break;
								}
							}
							else {
								cout << "�밴��˵��������������ѡ�����" << endl;
								break;
							}
							cout << "��" << chosed << "��ʼ����" << chosed0 << '\n'
								<< "��ѡ�������Ҫ���еĲ���" << endl;
							break;
						case 3:
							cout << "��ѡ��Ҫ�鿴���Ѿ���ʼ���˵�ջ" << endl;
							if (cin >> chosed) {
								if (chosed == 'd') {
									if (dflag) {
										deorf = d;
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
								}
								else if (chosed == 'e') {
									if (eflag) {
										deorf = e;
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
								}
								else if (chosed == 'f') {
									if (fflag) {
										deorf = f;
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
								}
								else
								{
									cout << "�밴��˵��������������ѡ�����" << endl;
									break;
								}
							}
							else
							{
								cout << "�밴��˵��������������ѡ�����" << endl;
								break;
							}
							cout << chosed << "��������" << (*deorf).size() << '\n'
								<< "��ѡ�������Ҫ���еĲ���" << endl;
							break;
						case 4:
							cout << "��ѡ��Ҫ�鿴���Ѿ���ʼ���˵�ջ" << endl;
							if (cin >> chosed) {
								if (chosed == 'd') {
									if (dflag) {
										deorf = d;
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
								}
								else if (chosed == 'e') {
									if (eflag) {
										deorf = e;
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
								}
								else if (chosed == 'f') {
									if (fflag) {
										deorf = f;
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
								}
								else
								{
									cout << "�밴��˵��������������ѡ�����" << endl;
									break;
								}
							}
							else
							{
								cout << "�밴��˵��������������ѡ�����" << endl;
								break;
							}
							cout << chosed << "��Ԫ�ظ�����" << (*deorf).howMany() << '\n'
								<< "��ѡ�������Ҫ���еĲ���" << endl;
							break;
						case 5:
							cout << "��ѡ��Ҫ�鿴���Ѿ���ʼ���˵�ջ" << endl;
							if (cin >> chosed) {
								if (chosed == 'd') {
									if (dflag) {
										deorf = d;
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
								}
								else if (chosed == 'e') {
									if (eflag) {
										deorf = e;
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
								}
								else if (chosed == 'f') {
									if (fflag) {
										deorf = f;
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
								}
								else
								{
									cout << "�밴��˵������,������ѡ�����" << endl;
									break;
								}
							}
							else
							{
								cout << "�밴��˵��������������ѡ�����" << endl;
								break;
							}
							cout << "������Ҫ�鿴��Ԫ��λ��" << endl;
							if (cin >> e_num) {
								cout << chosed << "ջ" << e_num << "����Ԫ��Ϊ" << (*deorf).getelem(e_num) << endl;
							}
							else
							{
								cout << "�밴��˵��������������ѡ�����" << endl;
								break;
							}
							cout << "��ѡ�������Ҫ���еĲ���" << endl;
							break;
						case 6:
							cout << "��ѡ��Ҫѹ���ջ" << endl;
							if (cin >> chosed) {
								if (chosed == 'd') {
									if (dflag) {
										deorf = d;
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
								}
								else if (chosed == 'e') {
									if (eflag) {
										deorf = e;
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
								}
								else if (chosed == 'f') {
									if (fflag) {
										deorf = f;
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
								}
								else
								{
									cout << "�밴��˵��������������ѡ�����" << endl;
									break;
								}
							}
							else
							{
								cout << "�밴��˵��������������ѡ�����" << endl;
								break;
							}
							cout << "������Ҫѹ��ջ��Ԫ��" << endl;
							if (cin >> e_num) {
							}
							else {
								cout << "�밴��˵��������������ѡ�����" << endl;
								break;
							}
							(*deorf).push(e_num);
							cout << "�����ɹ�����" << e_num << "ѹ��ջ" << chosed << "��" << '\n'
								<< "��ѡ�������Ҫ���еĲ���" << endl;
							break;
						case 7:
							cout << "��ѡ��Ҫ������ջ" << endl;
							if (cin >> chosed) {
								if (chosed == 'd') {
									if (dflag) {
										deorf = d;
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
								}
								else if (chosed == 'e') {
									if (eflag) {
										deorf = e;
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
								}
								else if (chosed == 'f') {
									if (fflag) {
										deorf = f;
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
								}
								else
								{
									cout << "�밴��˵��������������ѡ�����" << endl;
									break;
								}
							}
							else
							{
								cout << "�밴��˵��������������ѡ�����" << endl;
								break;
							}
							(*deorf).pop(e_num);
							cout << "�����ɹ�������a�����һλԪ��" << e_num << '\n'
								<< "��ѡ�������Ҫ���еĲ���" << endl;
							break;
						case 8:
							cout << "������ʹ��d��e��f���Ѿ���ʼ����ջ�������ջ��ֵ" << '\n'
							<< "��ѡ��Ҫ����һ��ջ��Ϊ��ֵģ��" << endl;
							if (cin >> chosed) {
								if (chosed == 'd') {
									if (dflag) {
										deorf0 = d;
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
									cout << "��ѡ��Ҫ��ֵ�Ķ���" << endl;
									if (cin >> chosed0) {
										if (chosed0 == 'e') {
											if (eflag) {
												deorf = e;
											}
											else
											{
												cout << "�밴��˵��������������ѡ�����" << endl;
												break;
											}
										}
										else if (chosed0 == 'f') {
											if (fflag) {
												deorf = f;
											}
											else
											{
												cout << "�밴��˵��������������ѡ�����" << endl;
												break;
											}
										}
										else
										{
											cout << "�밴��˵��������������ѡ�����" << endl;
											break;
										}
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
								}
								else if (chosed == 'e') {
									if (eflag) {
										deorf0 = e;
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
									cout << "��ѡ��Ҫ��ֵ�Ķ���" << endl;
									if (cin >> chosed0) {
										if (chosed == 'd') {
											if (dflag) {
												deorf = d;
											}
											else
											{
												cout << "�밴��˵��������������ѡ�����" << endl;
												break;
											}
										}
										else if (chosed == 'f') {
											if (fflag) {
												deorf = f;
											}
											else
											{
												cout << "�밴��˵��������������ѡ�����" << endl;
												break;
											}
										}
										else
										{
											cout << "�밴��˵������,������ѡ�����" << endl;
											break;
										}
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
								}
								else if (chosed == 'f') {
									if (fflag) {
										deorf0 = f;
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
									cout << "��ѡ��Ҫ��ֵ�Ķ���" << endl;
									if (cin >> chosed0) {
										if (chosed == 'd') {
											if (dflag) {
												deorf = d;
											}
											else
											{
												cout << "�밴��˵��������������ѡ�����" << endl;
												break;
											}
										}
										else if (chosed == 'e') {
											if (eflag) {
												deorf = e;
											}
											else
											{
												cout << "�밴��˵��������������ѡ�����" << endl;
												break;
											}
										}
										else
										{
											cout << "�밴��˵��������������ѡ�����" << endl;
											break;
										}
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
								}
								else
								{
									cout << "�밴��˵������,������ѡ�����" << endl;
									break;
								}
								(*deorf).assign(*deorf0);
								cout << "�����ɹ�����" << chosed << "��ֵ��" << chosed0 << endl;
							}
							cout << "��ѡ�������Ҫ���еĲ���" << endl;
							break;
						case 9:
							cout << "��ѡ��Ҫ��ӡ��ջ" << endl;
							if (cin >> chosed) {
								if (chosed == 'd') {
									if (dflag) {
										deorf = d;
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
								}
								else if (chosed == 'e') {
									if (eflag) {
										deorf = e;
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
								}
								else if (chosed == 'f') {
									if (fflag) {
										deorf = f;
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
								}
								else
								{
									cout << "�밴��˵��������������ѡ�����" << endl;
									break;
								}
							}
							else
							{
								cout << "�밴��˵��������������ѡ�����" << endl;
								break;
							}
							(*deorf).print();
							cout << "�����ɹ�����ӡ��" << chosed << "�����е�Ԫ��" << '\n'
								<< "��ѡ�������Ҫ���еĲ���" << endl;
							break;
						case 10:
							cout << "��ѡ��Ҫ�����Ѿ���ʼ����ջ" << endl;
							if (cin >> chosed) {
								if (chosed == 'd') {
									if (dflag) {
										deorf = d;
										dflag = 0;
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
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
										cout << "�밴��˵��������������ѡ�����" << endl;
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
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
								}
								else
								{
									cout << "�밴��˵��������������ѡ�����" << endl;
									break;
								}
							}
							else
							{
								cout << "�밴��˵��������������ѡ�����" << endl;
								break;
							}
							(*deorf).~OOSTK();
							cout << "�����ɹ�������ջ" << chosed << '\n'
								<< "��ѡ�������Ҫ���еĲ���" << endl;
							break;
						case 0:
							flag2 = 0;
							cout << "�˳��˵�ǰ����" << endl;
							break;
						default:
							cout << "�밴��˵��������������ѡ�����" << endl;
							break;
						}
					}
					else {
						cout << "�밴��ָʾѡ�������������ѡ�����" << endl;
						break;
					}
				}
				break;
			case 3:
				cout << "----------���Ѿ�����STACK����--------" << '\n'
					<< "-----------����������Ҫ���еĲ���---------" << '\n'
					<< "1����ʼ��ջ           2��ʹ��ջ��ʼ��ջ" << '\n'
					<< "3���������		      4�����Ԫ�ظ���" << '\n'
					<< "5������ض�λ��Ԫ��ֵ  6��ѹջ" << '\n'
					<< "7������               8����ջ��ֵ" << '\n'
					<< "9����ӡ              10������" << '\n'
					<< "0���˳�" << endl;
				flag2 = 1;
				while (flag2) {
					if (cin >> stage2) {
						switch (stage2)
						{
						case 1:
							cout << "������ѡ���ʼ��ջg��h����i" << endl;
							if (cin >> chosed) {
								if (chosed == 'g') {
									cout << "������" << chosed << "������" << endl;
									if (cin >> costumeDefineSize) {
										g = new STACK(costumeDefineSize);
										ghori = g;
										gflag = 1;
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
								}
								else if (chosed == 'h') {
									cout << "������" << chosed << "������" << endl;
									if (cin >> costumeDefineSize) {
										h = new STACK(costumeDefineSize);
										ghori = h;
										hflag = 1;
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
								}
								else if (chosed == 'i') {
									cout << "������" << chosed << "������" << endl;
									if (cin >> costumeDefineSize) {
										i = new STACK(costumeDefineSize);
										ghori = i;
										iflag = 1;
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
								}
								else {
									cout << "�밴��˵��������������ѡ�����" << endl;
									break;
								}
							}
							else {
								cout << "�밴��˵��������������ѡ�����" << endl;
								break;
							}
							cout << "��ʼ����ջ" << chosed << "����Ϊ" << costumeDefineSize << '\n'
								<< "��ѡ�������Ҫ���еĲ���" << endl;
							break;
						case 2:
							cout << "������ʹ��g��h��i���Ѿ���ʼ����ջ����ʼ�����ջ" << '\n'
								<< "��ѡ��Ҫ����һ��ջ��Ϊ��ʼ��ģ��" << endl;
							if (cin >> chosed) {
								if (chosed == 'g') {
									if (gflag) {
										ghori0 = g;
										cout << "��ѡ��Ҫ��ʼ���Ķ���" << endl;
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
												cout << "�밴��˵��������������ѡ�����" << endl;
												break;
											}
										}
										else
										{
											cout << "�밴��˵��������������ѡ�����" << endl;
											break;
										}
									}
									else {
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
								}
								else if (chosed == 'h') {
									if (hflag) {
										ghori0 = h;
										cout << "��ѡ��Ҫ��ʼ���Ķ���" << endl;
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
												cout << "�밴��˵��������������ѡ�����" << endl;
												break;
											}
										}
										else
										{
											cout << "�밴��˵��������������ѡ�����" << endl;
											break;
										}
									}
									else
									{
										cout << "�밴��˵������,������ѡ�����" << endl;
										break;
									}
								}
								else if (chosed == 'i') {
									if (iflag) {
										ghori0 = i;
										cout << "��ѡ��Ҫ��ʼ���Ķ���" << endl;
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
												cout << "�밴��˵��������������ѡ�����" << endl;
												break;
											}
										}
										else
										{
											cout << "�밴��˵��������������ѡ�����" << endl;
											break;
										}
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
								}
								else
								{
									cout << "�밴��˵��������������ѡ�����" << endl;
									break;
								}
							}
							else {
								cout << "�밴��˵��������������ѡ�����" << endl;
								break;
							}
							cout << "��" << chosed << "��ʼ����" << chosed0 << '\n'
								<< "��ѡ�������Ҫ���еĲ���" << endl;
							break;
						case 3:
							cout << "��ѡ��Ҫ�鿴���Ѿ���ʼ���˵�ջ" << endl;
							if (cin >> chosed) {
								if (chosed == 'g') {
									if (gflag) {
										ghori = g;
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
								}
								else if (chosed == 'h') {
									if (hflag) {
										ghori = h;
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
								}
								else if (chosed == 'i') {
									if (iflag) {
										ghori = i;
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
								}
								else
								{
									cout << "�밴��˵��������������ѡ�����" << endl;
									break;
								}
							}
							else
							{
								cout << "�밴��˵��������������ѡ�����" << endl;
								break;
							}
							cout << chosed << "��������" << (*ghori).size() << '\n'
								<< "��ѡ�������Ҫ���еĲ���" << endl;
							break;
						case 4:
							cout << "��ѡ��Ҫ�鿴���Ѿ���ʼ���˵�ջ" << endl;
							if (cin >> chosed) {
								if (chosed == 'g') {
									if (gflag) {
										ghori = g;
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
								}
								else if (chosed == 'h') {
									if (hflag) {
										ghori = h;
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
								}
								else if (chosed == 'i') {
									if (iflag) {
										ghori = i;
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
								}
								else
								{
									cout << "�밴��˵��������������ѡ�����" << endl;
									break;
								}
							}
							else
							{
								cout << "�밴��˵��������������ѡ�����" << endl;
								break;
							}
							cout << chosed << "��Ԫ�ظ�����" << (int)(*ghori) << '\n'
								<< "��ѡ�������Ҫ���еĲ���" << endl;
							break;
						case 5:
							cout << "��ѡ��Ҫ�鿴���Ѿ���ʼ���˵�ջ" << endl;
							if (cin >> chosed) {
								if (chosed == 'g') {
									if (gflag) {
										ghori = g;
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
								}
								else if (chosed == 'h') {
									if (hflag) {
										ghori = h;
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
								}
								else if (chosed == 'i') {
									if (iflag) {
										ghori = i;
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
								}
								else
								{
									cout << "�밴��˵������,������ѡ�����" << endl;
									break;
								}
							}
							else
							{
								cout << "�밴��˵��������������ѡ�����" << endl;
								break;
							}
							cout << "������Ҫ�鿴��Ԫ��λ��" << endl;
							if (cin >> e_num) {
								cout << chosed << "ջ" << e_num << "����Ԫ��Ϊ" << (*ghori)[e_num] << endl;
							}
							else
							{
								cout << "�밴��˵��������������ѡ�����" << endl;
								break;
							}
							cout << "��ѡ�������Ҫ���еĲ���" << endl;
							break;
						case 6:
							cout << "��ѡ��Ҫѹ���ջ" << endl;
							if (cin >> chosed) {
								if (chosed == 'g') {
									if (gflag) {
										ghori = g;
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
								}
								else if (chosed == 'h') {
									if (hflag) {
										ghori = h;
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
								}
								else if (chosed == 'i') {
									if (iflag) {
										ghori = i;
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
								}
								else
								{
									cout << "�밴��˵��������������ѡ�����" << endl;
									break;
								}
							}
							else
							{
								cout << "�밴��˵��������������ѡ�����" << endl;
								break;
							}
							cout << "������Ҫѹ���ջ��Ԫ��" << endl;
							if (cin >> e_num) {
							}
							else {
								cout << "�밴��˵��������������ѡ�����" << endl;
								break;
							}
							(*ghori)<<e_num;
							cout << "�����ɹ�����" << e_num << "ѹ��ջ" << chosed << "��" << '\n'
								<< "��ѡ�������Ҫ���еĲ���" << endl;
							break;
						case 7:
							cout << "��ѡ��Ҫ������ջ" << endl;
							if (cin >> chosed) {
								if (chosed == 'g') {
									if (gflag) {
										ghori = g;
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
								}
								else if (chosed == 'h') {
									if (hflag) {
										ghori = h;
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
								}
								else if (chosed == 'i') {
									if (iflag) {
										ghori = i;
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
								}
								else
								{
									cout << "�밴��˵��������������ѡ�����" << endl;
									break;
								}
							}
							else
							{
								cout << "�밴��˵��������������ѡ�����" << endl;
								break;
							}
							(*ghori)>>e_num;
							cout << "�����ɹ�������a�����һλԪ��" << e_num << '\n'
							<< "��ѡ�������Ҫ���еĲ���" << endl;
							break;
						case 8:
							cout << "������ʹ��g��h��i���Ѿ���ʼ����ջ�������ջ��ֵ" << '\n'
								<< "��ѡ��Ҫ����һ��ջ��Ϊ��ֵģ��" << endl;
							if (cin >> chosed) {
								if (chosed == 'g') {
									if (gflag) {
										ghori0 = g;
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
									cout << "��ѡ��Ҫ��ֵ�Ķ���" << endl;
									if (cin >> chosed0) {
										if (chosed0 == 'h') {
											if (hflag) {
												ghori = h;
											}
											else
											{
												cout << "�밴��˵��������������ѡ�����" << endl;
												break;
											}
										}
										else if (chosed0 == 'i') {
											if (iflag) {
												ghori = i;
											}
											else
											{
												cout << "�밴��˵��������������ѡ�����" << endl;
												break;
											}
										}
										else
										{
											cout << "�밴��˵��������������ѡ�����" << endl;
											break;
										}
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
								}
								else if (chosed == 'h') {
									if (hflag) {
										ghori0 = h;
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
									cout << "��ѡ��Ҫ��ֵ�Ķ���" << endl;
									if (cin >> chosed0) {
										if (chosed == 'g') {
											if (gflag) {
												ghori = g;
											}
											else
											{
												cout << "�밴��˵��������������ѡ�����" << endl;
												break;
											}
										}
										else if (chosed == 'i') {
											if (iflag) {
												ghori = i;
											}
											else
											{
												cout << "�밴��˵��������������ѡ�����" << endl;
												break;
											}
										}
										else
										{
											cout << "�밴��˵������,������ѡ�����" << endl;
											break;
										}
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
								}
								else if (chosed == 'i') {
									if (iflag) {
										ghori0 = i;
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
									cout << "��ѡ��Ҫ��ֵ�Ķ���" << endl;
									if (cin >> chosed0) {
										if (chosed == 'g') {
											if (gflag) {
												ghori = g;
											}
											else
											{
												cout << "�밴��˵��������������ѡ�����" << endl;
												break;
											}
										}
										else if (chosed == 'h') {
											if (hflag) {
												ghori = h;
											}
											else
											{
												cout << "�밴��˵��������������ѡ�����" << endl;
												break;
											}
										}
										else
										{
											cout << "�밴��˵��������������ѡ�����" << endl;
											break;
										}
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
								}
								else
								{
									cout << "�밴��˵������,������ѡ�����" << endl;
									break;
								}
								(*ghori)=(*ghori0);
								cout << "�����ɹ�����" << chosed << "��ֵ��" << chosed0 << endl;
							}
							cout << "��ѡ�������Ҫ���еĲ���" << endl;
							break;
						case 9:
							cout << "��ѡ��Ҫ��ӡ��ջ" << endl;
							if (cin >> chosed) {
								if (chosed == 'g') {
									if (gflag) {
										ghori = g;
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
								}
								else if (chosed == 'h') {
									if (hflag) {
										ghori = h;
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
								}
								else if (chosed == 'i') {
									if (iflag) {
										ghori = i;
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
								}
								else
								{
									cout << "�밴��˵��������������ѡ�����" << endl;
									break;
								}
							}
							else
							{
								cout << "�밴��˵��������������ѡ�����" << endl;
								break;
							}
							(*ghori).print();
							cout << "�����ɹ�����ӡ��" << chosed << "�����е�Ԫ��" << '\n'
								<< "��ѡ�������Ҫ���еĲ���" << endl;
							break;
						case 10:
							cout << "��ѡ��Ҫ�����Ѿ���ʼ����ջ" << endl;
							if (cin >> chosed) {
								if (chosed == 'g') {
									if (gflag) {
										ghori = g;
										gflag = 0;
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
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
										cout << "�밴��˵��������������ѡ�����" << endl;
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
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
								}
								else
								{
									cout << "�밴��˵��������������ѡ�����" << endl;
									break;
								}
							}
							else
							{
								cout << "�밴��˵��������������ѡ�����" << endl;
								break;
							}
							(*ghori).~STACK();
							cout << "�����ɹ�������ջ" << chosed << '\n'
								<< "��ѡ�������Ҫ���еĲ���" << endl;
							break;
						case 0:
							flag2 = 0;
							cout << "�˳��˵�ǰ����" << endl;
							break;
						default:
							cout << "�밴��˵��������������ѡ�����" << endl;
							break;
						}
					}
					else {
						cout << "�밴��ָʾѡ�������������ѡ�����" << endl;
						break;
					}
				}
				break;
			case 4:
				cout << "----------���Ѿ�����QUE2S����--------" << '\n'
					<< "-----------����������Ҫ���еĲ���---------" << '\n'
					<< "1����ʼ������           2��ʹ�ö��г�ʼ������" << '\n'
					<< "3�����Ԫ�ظ���         4������ض�λ��Ԫ��ֵ" << '\n'
					<< "5�������               6��������" << '\n'
					<< "7���ö��и�ֵ           8����ӡ" << '\n'
					<< "9������                 0���˳�" << endl;
				flag2 = 1;
				while (flag2) {
					if (cin >> stage2) {
						switch (stage2)
						{
						case 1:
							cout << "������ѡ���ʼ������j��k����l" << endl;
							if (cin >> chosed) {
								if (chosed == 'j') {
									cout << "������" << chosed << "������" << endl;
									if (cin >> costumeDefineSize) {
										j = new QUE2S(costumeDefineSize);
										jkorl = j;
										jflag = 1;
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
								}
								else if (chosed == 'k') {
									cout << "������" << chosed << "������" << endl;
									if (cin >> costumeDefineSize) {
										k = new QUE2S(costumeDefineSize);
										jkorl = k;
										kflag = 1;
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
								}
								else if (chosed == 'l') {
									cout << "������" << chosed << "������" << endl;
									if (cin >> costumeDefineSize) {
										l = new QUE2S(costumeDefineSize);
										jkorl = l;
										lflag = 1;
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
								}
								else {
									cout << "�밴��˵��������������ѡ�����" << endl;
									break;
								}
							}
							else {
								cout << "�밴��˵��������������ѡ�����" << endl;
								break;
							}
							cout << "��ʼ����ջ" << chosed << "����Ϊ" << costumeDefineSize << '\n'
								<< "��ѡ�������Ҫ���еĲ���" << endl;
							break;
						case 2:
							cout << "������ʹ��j��k��l���Ѿ���ʼ����ջ����ʼ�����ջ" << '\n'
								<< "��ѡ��Ҫ����һ��ջ��Ϊ��ʼ��ģ��" << endl;
							if (cin >> chosed) {
								if (chosed == 'j') {
									if (jflag) {
										jkorl0 = j;
										cout << "��ѡ��Ҫ��ʼ���Ķ���" << endl;
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
												cout << "�밴��˵��������������ѡ�����" << endl;
												break;
											}
										}
										else
										{
											cout << "�밴��˵��������������ѡ�����" << endl;
											break;
										}
									}
									else {
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
								}
								else if (chosed == 'k') {
									if (kflag) {
										jkorl0 = k;
										cout << "��ѡ��Ҫ��ʼ���Ķ���" << endl;
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
												cout << "�밴��˵��������������ѡ�����" << endl;
												break;
											}
										}
										else
										{
											cout << "�밴��˵��������������ѡ�����" << endl;
											break;
										}
									}
									else
									{
										cout << "�밴��˵������,������ѡ�����" << endl;
										break;
									}
								}
								else if (chosed == 'i') {
									if (lflag) {
										jkorl0 = l;
										cout << "��ѡ��Ҫ��ʼ���Ķ���" << endl;
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
												cout << "�밴��˵��������������ѡ�����" << endl;
												break;
											}
										}
										else
										{
											cout << "�밴��˵��������������ѡ�����" << endl;
											break;
										}
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
								}
								else
								{
									cout << "�밴��˵��������������ѡ�����" << endl;
									break;
								}
							}
							else {
								cout << "�밴��˵��������������ѡ�����" << endl;
								break;
							}
							cout << "��" << chosed << "��ʼ����" << chosed0 << '\n'
								<< "��ѡ�������Ҫ���еĲ���" << endl;
							break;
						case 3:
							cout << "��ѡ��Ҫ�鿴���Ѿ���ʼ���˵Ķ���" << endl;
							if (cin >> chosed) {
								if (chosed == 'j') {
									if (jflag) {
										jkorl = j;
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
								}
								else if (chosed == 'k') {
									if (kflag) {
										jkorl = k;
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
								}
								else if (chosed == 'l') {
									if (lflag) {
										jkorl = l;
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
								}
								else
								{
									cout << "�밴��˵��������������ѡ�����" << endl;
									break;
								}
							}
							else
							{
								cout << "�밴��˵��������������ѡ�����" << endl;
								break;
							}
							cout << chosed << "��Ԫ�ظ�����" << (int)(*jkorl) << '\n'
								<< "��ѡ�������Ҫ���еĲ���" << endl;
							break;
						case 4:
							cout << "��ѡ��Ҫ�鿴���Ѿ���ʼ���˵�ջ" << endl;
							if (cin >> chosed) {
								if (chosed == 'j') {
									if (jflag) {
										jkorl = j;
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
								}
								else if (chosed == 'k') {
									if (kflag) {
										jkorl = k;
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
								}
								else if (chosed == 'l') {
									if (lflag) {
										jkorl = l;
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
								}
								else
								{
									cout << "�밴��˵������,������ѡ�����" << endl;
									break;
								}
							}
							else
							{
								cout << "�밴��˵��������������ѡ�����" << endl;
								break;
							}
							cout << "������Ҫ�鿴��Ԫ��λ��" << endl;
							if (cin >> e_num) {
								cout << chosed << "����" << e_num << "����Ԫ��Ϊ" << (*ghori)[e_num] << endl;
							}
							else
							{
								cout << "�밴��˵��������������ѡ�����" << endl;
								break;
							}
							cout << "��ѡ�������Ҫ���еĲ���" << endl;
							break;
						case 5:
							cout << "��ѡ��Ҫѹ��Ķ���" << endl;
							if (cin >> chosed) {
								if (chosed == 'j') {
									if (jflag) {
										jkorl = j;
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
								}
								else if (chosed == 'k') {
									if (kflag) {
										jkorl = k;
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
								}
								else if (chosed == 'l') {
									if (lflag) {
										jkorl = l;
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
								}
								else
								{
									cout << "�밴��˵��������������ѡ�����" << endl;
									break;
								}
							}
							else
							{
								cout << "�밴��˵��������������ѡ�����" << endl;
								break;
							}
							cout << "��ѡ��Ҫ����е�Ԫ��" << endl;
							if (cin >> e_num) {
							}
							else {
								cout << "�밴��˵��������������ѡ�����" << endl;
								break;
							}
							(*jkorl) << e_num;
							cout << "�����ɹ�����" << e_num << "�����" << chosed << "��" << '\n'
								<< "��ѡ�������Ҫ���еĲ���" << endl;
							break;
						case 6:
							cout << "��ѡ��Ҫ���Ķ���" << endl;
							if (cin >> chosed) {
								if (chosed == 'j') {
									if (jflag) {
										jkorl = j;
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
								}
								else if (chosed == 'k') {
									if (kflag) {
										jkorl = k;
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
								}
								else if (chosed == 'l') {
									if (lflag) {
										jkorl = l;
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
								}
								else
								{
									cout << "�밴��˵��������������ѡ�����" << endl;
									break;
								}
							}
							else
							{
								cout << "�밴��˵��������������ѡ�����" << endl;
								break;
							}
							(*jkorl) >> e_num;
							cout << "�����ɹ�����" << chosed << "�����һλԪ��" << e_num << '\n'
								<< "��ѡ�������Ҫ���еĲ���" << endl;
							break;
						case 7:
							cout << "������ʹ��j��k��l���Ѿ���ʼ���Ķ���������Ķ��и�ֵ" << '\n'
								<< "��ѡ��Ҫ����һ��������Ϊ��ֵģ��" << endl;
							if (cin >> chosed) {
								if (chosed == 'j') {
									if (jflag) {
										jkorl0 = j;
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
									cout << "��ѡ��Ҫ��ֵ�Ķ���" << endl;
									if (cin >> chosed0) {
										if (chosed0 == 'k') {
											if (kflag) {
												jkorl = k;
											}
											else
											{
												cout << "�밴��˵��������������ѡ�����" << endl;
												break;
											}
										}
										else if (chosed0 == 'l') {
											if (lflag) {
												jkorl = l;
											}
											else
											{
												cout << "�밴��˵��������������ѡ�����" << endl;
												break;
											}
										}
										else
										{
											cout << "�밴��˵��������������ѡ�����" << endl;
											break;
										}
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
								}
								else if (chosed == 'k') {
									if (kflag) {
										jkorl0 = k;
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
									cout << "��ѡ��Ҫ��ֵ�Ķ���" << endl;
									if (cin >> chosed0) {
										if (chosed == 'j') {
											if (jflag) {
												jkorl = j;
											}
											else
											{
												cout << "�밴��˵��������������ѡ�����" << endl;
												break;
											}
										}
										else if (chosed == 'l') {
											if (lflag) {
												jkorl = l;
											}
											else
											{
												cout << "�밴��˵��������������ѡ�����" << endl;
												break;
											}
										}
										else
										{
											cout << "�밴��˵������,������ѡ�����" << endl;
											break;
										}
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
								}
								else if (chosed == 'l') {
									if (lflag) {
										jkorl0 = l;
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
									cout << "��ѡ��Ҫ��ֵ�Ķ���" << endl;
									if (cin >> chosed0) {
										if (chosed == 'j') {
											if (jflag) {
												jkorl = j;
											}
											else
											{
												cout << "�밴��˵��������������ѡ�����" << endl;
												break;
											}
										}
										else if (chosed == 'k') {
											if (kflag) {
												jkorl = k;
											}
											else
											{
												cout << "�밴��˵��������������ѡ�����" << endl;
												break;
											}
										}
										else
										{
											cout << "�밴��˵��������������ѡ�����" << endl;
											break;
										}
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
								}
								else
								{
									cout << "�밴��˵������,������ѡ�����" << endl;
									break;
								}
								(*jkorl) = (*jkorl0);
								cout << "�����ɹ�����" << chosed << "��ֵ��" << chosed0 << endl;
							}
							cout << "��ѡ�������Ҫ���еĲ���" << endl;
							break;
						case 8:
							cout << "��ѡ��Ҫ��ӡ�Ķ���" << endl;
							if (cin >> chosed) {
								if (chosed == 'j') {
									if (jflag) {
										jkorl = j;
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
								}
								else if (chosed == 'k') {
									if (kflag) {
										jkorl = k;
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
								}
								else if (chosed == 'l') {
									if (lflag) {
										jkorl = l;
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
								}
								else
								{
									cout << "�밴��˵��������������ѡ�����" << endl;
									break;
								}
							}
							else
							{
								cout << "�밴��˵��������������ѡ�����" << endl;
								break;
							}
							(*jkorl).print();
							cout << "�����ɹ�����ӡ��" << chosed << "�����е�Ԫ��" << '\n'
								<< "��ѡ�������Ҫ���еĲ���" << endl;
							break;
						case 9:
							cout << "��ѡ��Ҫ�����Ѿ���ʼ���Ķ���" << endl;
							if (cin >> chosed) {
								if (chosed == 'j') {
									if (jflag) {
										jkorl = j;
										jkorl = 0;
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
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
										cout << "�밴��˵��������������ѡ�����" << endl;
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
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
								}
								else
								{
									cout << "�밴��˵��������������ѡ�����" << endl;
									break;
								}
							}
							else
							{
								cout << "�밴��˵��������������ѡ�����" << endl;
								break;
							}
							(*jkorl).~QUE2S();
							cout << "�����ɹ�������ջ" << chosed << '\n'
								<< "��ѡ�������Ҫ���еĲ���" << endl;
							break;
						case 0:
							flag2 = 0;
							cout << "�˳��˵�ǰ����" << endl;
							break;
						default:
							cout << "�밴��˵��������������ѡ�����" << endl;
							break;
						}
					}
					else {
						cout << "�밴��ָʾѡ�������������ѡ�����" << endl;
						break;
					}
				}
				break;
			case 5:
				cout << "----------���Ѿ�����QUEIS����--------" << '\n'
					<< "-----------����������Ҫ���еĲ���---------" << '\n'
					<< "1����ʼ������           2��ʹ�ö��г�ʼ������" << '\n'
					<< "3�����Ԫ�ظ���         4������ض�λ��Ԫ��ֵ" << '\n'
					<< "5�������               6��������" << '\n'
					<< "7���ö��и�ֵ           8����ӡ" << '\n'
					<< "9������                 0���˳�" << endl;
				flag2 = 1;
				while (flag2) {
					if (cin >> stage2) {
						switch (stage2)
						{
						case 1:
							cout << "������ѡ���ʼ������m��n����o" << endl;
							if (cin >> chosed) {
								if (chosed == 'm') {
									cout << "������" << chosed << "������" << endl;
									if (cin >> costumeDefineSize) {
										m = new QUEIS(costumeDefineSize);
										mnoro = m;
										mflag = 1;
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
								}
								else if (chosed == 'n') {
									cout << "������" << chosed << "������" << endl;
									if (cin >> costumeDefineSize) {
										n = new QUEIS(costumeDefineSize);
										mnoro = n;
										nflag = 1;
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
								}
								else if (chosed == 'o') {
									cout << "������" << chosed << "������" << endl;
									if (cin >> costumeDefineSize) {
										o = new QUEIS(costumeDefineSize);
										mnoro = o;
										oflag = 1;
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
								}
								else {
									cout << "�밴��˵��������������ѡ�����" << endl;
									break;
								}
							}
							else {
								cout << "�밴��˵��������������ѡ�����" << endl;
								break;
							}
							cout << "��ʼ����ջ" << chosed << "����Ϊ" << costumeDefineSize << '\n'
								<< "��ѡ�������Ҫ���еĲ���" << endl;
							break;
						case 2:
							cout << "������ʹ��m��n��o���Ѿ���ʼ����ջ����ʼ�����ջ" << '\n'
								<< "��ѡ��Ҫ����һ��ջ��Ϊ��ʼ��ģ��" << endl;
							if (cin >> chosed) {
								if (chosed == 'm') {
									if (mflag) {
										mnoro0 = m;
										cout << "��ѡ��Ҫ��ʼ���Ķ���" << endl;
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
												cout << "�밴��˵��������������ѡ�����" << endl;
												break;
											}
										}
										else
										{
											cout << "�밴��˵��������������ѡ�����" << endl;
											break;
										}
									}
									else {
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
								}
								else if (chosed == 'n') {
									if (nflag) {
										mnoro = n;
										cout << "��ѡ��Ҫ��ʼ���Ķ���" << endl;
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
												cout << "�밴��˵��������������ѡ�����" << endl;
												break;
											}
										}
										else
										{
											cout << "�밴��˵��������������ѡ�����" << endl;
											break;
										}
									}
									else
									{
										cout << "�밴��˵������,������ѡ�����" << endl;
										break;
									}
								}
								else if (chosed == 'o') {
									if (oflag) {
										mnoro0 = o;
										cout << "��ѡ��Ҫ��ʼ���Ķ���" << endl;
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
												cout << "�밴��˵��������������ѡ�����" << endl;
												break;
											}
										}
										else
										{
											cout << "�밴��˵��������������ѡ�����" << endl;
											break;
										}
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
								}
								else
								{
									cout << "�밴��˵��������������ѡ�����" << endl;
									break;
								}
							}
							else {
								cout << "�밴��˵��������������ѡ�����" << endl;
								break;
							}
							cout << "��" << chosed << "��ʼ����" << chosed0 << '\n'
								<< "��ѡ�������Ҫ���еĲ���" << endl;
							break;
						case 3:
							cout << "��ѡ��Ҫ�鿴���Ѿ���ʼ���˵Ķ���" << endl;
							if (cin >> chosed) {
								if (chosed == 'm') {
									if (mflag) {
										mnoro = m;
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
								}
								else if (chosed == 'n') {
									if (nflag) {
										mnoro = n;
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
								}
								else if (chosed == 'o') {
									if (oflag) {
										mnoro = o;
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
								}
								else
								{
									cout << "�밴��˵��������������ѡ�����" << endl;
									break;
								}
							}
							else
							{
								cout << "�밴��˵��������������ѡ�����" << endl;
								break;
							}
							cout << chosed << "��Ԫ�ظ�����" << (int)(*mnoro) << '\n'
								<< "��ѡ�������Ҫ���еĲ���" << endl;
							break;
						case 4:
							cout << "��ѡ��Ҫ�鿴���Ѿ���ʼ���˵�ջ" << endl;
							if (cin >> chosed) {
								if (chosed == 'm') {
									if (mflag) {
										mnoro = m;
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
								}
								else if (chosed == 'n') {
									if (nflag) {
										mnoro = m;
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
								}
								else if (chosed == 'o') {
									if (oflag) {
										mnoro = o;
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
								}
								else
								{
									cout << "�밴��˵������,������ѡ�����" << endl;
									break;
								}
							}
							else
							{
								cout << "�밴��˵��������������ѡ�����" << endl;
								break;
							}
							cout << "������Ҫ�鿴��Ԫ��λ��" << endl;
							if (cin >> e_num) {
								cout << chosed << "����" << e_num << "����Ԫ��Ϊ" << (*mnoro)[e_num] << endl;
							}
							else
							{
								cout << "�밴��˵��������������ѡ�����" << endl;
								break;
							}
							cout << "��ѡ�������Ҫ���еĲ���" << endl;
							break;
						case 5:
							cout << "��ѡ��Ҫѹ��Ķ���" << endl;
							if (cin >> chosed) {
								if (chosed == 'm') {
									if (mflag) {
										mnoro = m;
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
								}
								else if (chosed == 'n') {
									if (nflag) {
										mnoro = n;
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
								}
								else if (chosed == 'o') {
									if (oflag) {
										mnoro = o;
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
								}
								else
								{
									cout << "�밴��˵��������������ѡ�����" << endl;
									break;
								}
							}
							else
							{
								cout << "�밴��˵��������������ѡ�����" << endl;
								break;
							}
							cout << "��ѡ��Ҫ����е�Ԫ��" << endl;
							if (cin >> e_num) {
							}
							else {
								cout << "�밴��˵��������������ѡ�����" << endl;
								break;
							}
							(*mnoro) << e_num;
							cout << "�����ɹ�����" << e_num << "�����" << chosed << "��" << '\n'
								<< "��ѡ�������Ҫ���еĲ���" << endl;
							break;
						case 6:
							cout << "��ѡ��Ҫ���Ķ���" << endl;
							if (cin >> chosed) {
								if (chosed == 'm') {
									if (mflag) {
										mnoro = m;
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
								}
								else if (chosed == 'n') {
									if (nflag) {
										mnoro = n;
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
								}
								else if (chosed == 'o') {
									if (oflag) {
										mnoro = o;
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
								}
								else
								{
									cout << "�밴��˵��������������ѡ�����" << endl;
									break;
								}
							}
							else
							{
								cout << "�밴��˵��������������ѡ�����" << endl;
								break;
							}
							(*mnoro) >> e_num;
							cout << "�����ɹ�����" << chosed << "�����һλԪ��" << e_num << '\n'
								<< "��ѡ�������Ҫ���еĲ���" << endl;
							break;
						case 7:
							cout << "������ʹ��m��n��o���Ѿ���ʼ���Ķ���������Ķ��и�ֵ" << '\n'
								<< "��ѡ��Ҫ����һ��������Ϊ��ֵģ��" << endl;
							if (cin >> chosed) {
								if (chosed == 'm') {
									if (mflag) {
										mnoro0 = m;
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
									cout << "��ѡ��Ҫ��ֵ�Ķ���" << endl;
									if (cin >> chosed0) {
										if (chosed0 == 'n') {
											if (nflag) {
												mnoro = n;
											}
											else
											{
												cout << "�밴��˵��������������ѡ�����" << endl;
												break;
											}
										}
										else if (chosed0 == 'o') {
											if (oflag) {
												mnoro = o;
											}
											else
											{
												cout << "�밴��˵��������������ѡ�����" << endl;
												break;
											}
										}
										else
										{
											cout << "�밴��˵��������������ѡ�����" << endl;
											break;
										}
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
								}
								else if (chosed == 'n') {
									if (nflag) {
										mnoro0 = n;
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
									cout << "��ѡ��Ҫ��ֵ�Ķ���" << endl;
									if (cin >> chosed0) {
										if (chosed == 'm') {
											if (mflag) {
												mnoro = m;
											}
											else
											{
												cout << "�밴��˵��������������ѡ�����" << endl;
												break;
											}
										}
										else if (chosed == 'o') {
											if (oflag) {
												mnoro = o;
											}
											else
											{
												cout << "�밴��˵��������������ѡ�����" << endl;
												break;
											}
										}
										else
										{
											cout << "�밴��˵������,������ѡ�����" << endl;
											break;
										}
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
								}
								else if (chosed == 'o') {
									if (oflag) {
										mnoro0 = o;
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
									cout << "��ѡ��Ҫ��ֵ�Ķ���" << endl;
									if (cin >> chosed0) {
										if (chosed == 'm') {
											if (mflag) {
												mnoro = m;
											}
											else
											{
												cout << "�밴��˵��������������ѡ�����" << endl;
												break;
											}
										}
										else if (chosed == 'n') {
											if (nflag) {
												mnoro = n;
											}
											else
											{
												cout << "�밴��˵��������������ѡ�����" << endl;
												break;
											}
										}
										else
										{
											cout << "�밴��˵��������������ѡ�����" << endl;
											break;
										}
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
								}
								else
								{
									cout << "�밴��˵������,������ѡ�����" << endl;
									break;
								}
								(*mnoro) = (*mnoro0);
								cout << "�����ɹ�����" << chosed << "��ֵ��" << chosed0 << endl;
							}
							cout << "��ѡ�������Ҫ���еĲ���" << endl;
							break;
						case 8:
							cout << "��ѡ��Ҫ��ӡ�Ķ���" << endl;
							if (cin >> chosed) {
								if (chosed == 'm') {
									if (mflag) {
										mnoro = m;
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
								}
								else if (chosed == 'n') {
									if (nflag) {
										mnoro = n;
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
								}
								else if (chosed == 'o') {
									if (oflag) {
										mnoro = o;
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
								}
								else
								{
									cout << "�밴��˵��������������ѡ�����" << endl;
									break;
								}
							}
							else
							{
								cout << "�밴��˵��������������ѡ�����" << endl;
								break;
							}
							(*mnoro).print();
							cout << "�����ɹ�����ӡ��" << chosed << "�����е�Ԫ��" << '\n'
								<< "��ѡ�������Ҫ���еĲ���" << endl;
							break;
						case 9:
							cout << "��ѡ��Ҫ�����Ѿ���ʼ���Ķ���" << endl;
							if (cin >> chosed) {
								if (chosed == 'm') {
									if (mflag) {
										mnoro = m;
										jflag = 0;
									}
									else
									{
										cout << "�밴��˵��������������ѡ�����" << endl;
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
										cout << "�밴��˵��������������ѡ�����" << endl;
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
										cout << "�밴��˵��������������ѡ�����" << endl;
										break;
									}
								}
								else
								{
									cout << "�밴��˵��������������ѡ�����" << endl;
									break;
								}
							}
							else
							{
								cout << "�밴��˵��������������ѡ�����" << endl;
								break;
							}
							(*mnoro).~QUEIS();
							cout << "�����ɹ�������ջ" << chosed << '\n'
								<< "��ѡ�������Ҫ���еĲ���" << endl;
							break;
						case 0:
							flag2 = 0;
							cout << "�˳��˵�ǰ����" << endl;
							break;
						default:
							cout << "�밴��˵��������������ѡ�����" << endl;
							break;
						}
					}
					else {
						cout << "�밴��ָʾѡ�������������ѡ�����" << endl;
						break;
					}
				}
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
	return 0;
}