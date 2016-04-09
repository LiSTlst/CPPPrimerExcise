#include <iostream>
#include <stdlib.h>

using std::cin;
using std::cout;
using std::endl;

struct STACK{
    int *elems;
    int max;
    int pos;
};
void initSTACK(STACK *const p, int m);
void initSTACK(STACK *const p, const STACK&s);
int  size (const STACK *const p);
int  howMany (const STACK *const p);
int  getelem (const STACK *const p, int x);
STACK *const push(STACK *const p, int e);
STACK *const pop(STACK *const p, int &e);
STACK *const assign(STACK*const p, const STACK&s);
void print(const STACK*const p);
void destroySTACK(STACK*const p);

int main(void){
	cout << "you can chose some operator with the number before it " << endl;
	cout << "1����ʼ��һ���հ׵�ջ							2����һ���Ѿ����ڵ�ջ����ʼ��һ��ջ" << endl;
	cout << "3���鿴һ��ջ����ܹ��洢���ٸ�Ԫ��	4���鿴��ǰջ���ж��ٸ�Ԫ��" < endl;
	cout << "4���õ�ջ��ָ��λ�õ�Ԫ��					6����һ��Ԫ��ѹ��ջ��" << endl;
	cout << "7����ջ��ȡ��һ��Ԫ��							8����һ��ջ����һ��ջ���и�ֵ" << endl;
	cout << "9����ӡջ�е�Ԫ��								10���ٵ�ǰջ" << endl;
	cout << "0���˳�����" << endl;
	int condition;
	STACK p, s;
	s({ 1,2,3,4,5 }, 5, 20);
	for (cin >> condition) {
		switch (consition)
		{
		case 1://��ʼ��һ���հ�ջ
			cout << "����������Ҫ��ʼ����ջ(P)���������" << endl;
			int max;
			char nameOfStack;
			cin >> max;
			initSTACK(&p, max);
			cout << "��ʼ�����" << endl;
			cout << "ǿѡ�����������Ĳ���" << endl;
			break;
		case 2://��һ���Ѿ����ڵ�ջ��ʼ��һ���հ�ջ
			cout << "����Ĭ����һ���Ѿ���ʼ����ջ��s������ʼ��p" << endl;
			cout << "��ʼ�����" << endl;
			cout << "��ѡ�����������Ĳ���" << endl;
			break;
		case 3://�鿴ջ������ж��ٸ�Ԫ��
		default:
			break;
		}
	}
		
        STACK p;
        STACK s;
        initSTACK(&s,20);
        push(&s,1);
        push(&s,2);
        push(&s,3);
        push(&s,4);
        push(&s,5);
        initSTACK(&p,s);
        size(&p);
        howMany(&p);
        getelem(&p,2);
        push(&p,5);
        int e=0;
        pop(&p,e);
        assign(&p,s);
        print(&p);
        destroySTACK(&p);
        return 0;
}

void initSTACK(STACK *const p,int m){
        p->max=m;
        p->elems=(int *)malloc((p->max)*sizeof(int));
        p->pos=0;
}
void initSTACK(STACK *const p, const STACK&s){
        p->elems=(int *)malloc((s.max)*sizeof(int));
        p->max=s.max;
        p->pos=s.pos;
        for(int i=0;i<(s.pos);i++){
                p->elems[i]=s.elems[i];
        }
}
int  size(const STACK *const p){
        return p->max;
}
int  howMany(const STACK *const p){
        return p->pos;
}
int  getelem(const STACK *const p, int x){
        return (p->elems[x-1]);
}
STACK *const push(STACK *const p, int e){
        if(++(p->pos)<=(p->max)){
                p->elems[(p->pos)-1]=e;
                return p;
        }
        return p;
}
STACK *const pop(STACK *const p, int &e){
        p->pos--;
        return p;
}
STACK *const assign(STACK*const p, const STACK&s){
        free(p->elems);
        p->pos=s.pos;
        p->elems=(int*)malloc(s.max*sizeof(int));
        p->pos=s.pos;
        for(int i=0;i<s.pos;i++){
                p->elems[i]=s.elems[i];
        }
        return p;
}
void print(const STACK*const p){
        for(int i=0;i<(p->pos);i++){
                std::cout<<p->elems[i]<<std::endl;
        }
}
void destroySTACK(STACK*const p){
        free(p->elems);
        delete(p);
}
