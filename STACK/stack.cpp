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
	cout << "1：初始化一个空白的栈							2：用一个已经存在的栈来初始化一个栈" << endl;
	cout << "3：查看一个栈最多能够存储多少个元素	4：查看当前栈中有多少个元素" < endl;
	cout << "4：得到栈中指定位置的元素					6：将一个元素压入栈中" << endl;
	cout << "7：从栈中取出一个元素							8：用一个栈对另一个栈进行赋值" << endl;
	cout << "9：打印栈中的元素								10销毁当前栈" << endl;
	cout << "0：退出程序" << endl;
	int condition;
	STACK p, s;
	s({ 1,2,3,4,5 }, 5, 20);
	for (cin >> condition) {
		switch (consition)
		{
		case 1://初始化一个空白栈
			cout << "请输入您想要初始化的栈(P)的最大容量" << endl;
			int max;
			char nameOfStack;
			cin >> max;
			initSTACK(&p, max);
			cout << "初始化完毕" << endl;
			cout << "强选择您接下来的操作" << endl;
			break;
		case 2://用一个已经存在的栈初始化一个空白栈
			cout << "现在默认用一个已经初始化的栈（s）来初始化p" << endl;
			cout << "初始化完毕" << endl;
			cout << "请选择您接下来的操作" << endl;
			break;
		case 3://查看栈中最多有多少个元素
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
