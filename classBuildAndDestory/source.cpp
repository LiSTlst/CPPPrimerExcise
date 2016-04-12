#include <string>
#include <iostream>
using std::cout;
using std::endl;

struct STRING{
	char *s;
	STRING(char *s);
	~STRING();
};
STRING::STRING(char *t){
	s=(char *)malloc(strlen(t));
	strcpy(s,t);
	cout<<"CONSTRUCT "<<s<<endl;
}
STRING::~STRING(){
	if(s==0){
		return;//防止反复释放内存
	}
	cout<<"DECONSTRUCT "<<s<<endl;
	free(s);
	s=0;
}
void main(void){
	STRING s1("String varible 1");
	STRING s2("String varible 2");
	cout<<"RETURN"<<endl;//注意当这里使用转义字符\n来
					 //进行换行的时候会出现错误,自
					 //动析构会失败
					 //可能因为\n之后仍然在输出流中
					 //但是这个错误的发生好像是随机的
					 //有时候可能会连续好多次不报错
}