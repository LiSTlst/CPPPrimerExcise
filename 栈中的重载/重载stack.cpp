#include <iostream>

class STACK{
    int  *const  elems;		//申请内存用于存放栈的元素
    const  int   max;			//栈能存放的最大元素个数
    int   pos;					//栈实际已有元素个数，栈空时pos=0;
public:
    STACK(int m);				//初始化栈：最多m个元素
    STACK(const STACK&s); 			//用栈s拷贝初始化栈
    virtual int  size ( ) const;				//返回栈的最大元素个数max
    virtual operator int ( ) const;			//返回栈的实际元素个数pos
    virtual int operator[ ] (int x) const;		//取下标x处的栈元素
    virtual STACK& operator<<(int e); 	//将e入栈，并返回当前栈
    virtual STACK& operator>>(int &e);	//出栈到e，并返回当前栈
    virtual STACK& operator=(const STACK&s); //赋s给当前栈并返回该栈
    virtual void print( ) const;				//打印栈
    virtual ~STACK( );						//销毁栈
};
//初始化栈：最多m个元素
STACK::STACK(int m):elems(new int[m]),max(m){
    pos=0;
}
//用栈s拷贝初始化栈
STACK::STACK(const STACK&s):elems(new int[s.max]),max(s.max){
    pos=s.pos;
    int i=0;
    for(i=0;i<pos;i++){
        elems[i]=s.elems[i];
    }
}
//返回栈的最大元素个数
int STACK::size()const{
    return max;
}
//返回栈中实际的元素个数
STACK::operator int ( ) const{
    return pos;
}

//返回下标为x的元素
int STACK::operator [](int x) const{
    if(0<=x<pos){
        return elems[x];
    }else{
        std::cout<<"The number you want to get is not exist"<<std::endl;
        return 0;
    }
}
//压入栈
STACK& STACK::operator <<(int e){
    if((pos+1)<=max){
        pos++;
        elems[pos-1]=e;
    }else{
        std::cout<<"This stack is fulled already."<<std::endl;
    }
    return *this;
}
//弹出栈
STACK& STACK::operator >>(int &e){
    if(pos>0){
        e=elems[pos-1];
        pos--;
    }else{
        std::cout<<"This stack is empty already."<<std::endl;
    }
    return *this;
}
//把s赋值给当前栈，并返回该栈
STACK& STACK::operator =(const STACK&s){
    delete(this->elems);
    int **pelems = (int **)&elems;
    int *pmax = (int *)&max;
    *pmax=s.max;
    *pelems=new int[*pmax];
    this->pos=s.pos;
    for(int i=0;i<this->pos;i++){
        (*pelems)[i]=s.elems[i];
    }
    return *this;
}
//打印当前栈
void STACK::print( ) const{
    for(int i=0;i<pos;i++){
        std::cout<<elems[i]<<std::endl;
    }
}
//销毁栈
STACK::~STACK( ){
    delete(elems);
    pos=0;
    *(int *)(&max)=0;
}

int main(void){
  STACK a(10);
  a<<1<<2<<3<<4;
  STACK c(20);
  c<<0<<1<<2<<3<<4<<5;
  int e=0;
  std::cout<<int(a)<<std::endl;
  std::cout<<a[2]<<std::endl;
  a>>e;
  std::cout<<e<<std::endl;
  STACK b(a);
  b=c;
  a.print();
  b.print();
  c.print();
  return 0;
}

