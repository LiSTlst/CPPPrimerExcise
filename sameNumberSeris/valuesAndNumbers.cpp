# pragma warning (disable:4819)
#include <iostream>
//这个程序用来检测输入的数字中连续相同的数字及其个数
int main(){
	int currVal=0,Val=0;//这里currVal用于记录一个连续相同的数字串的第一个数字
	std::cout<<"Enter numbers:"<<std::endl;
	if(std::cin>>currVal){//检测第一个输入的数字是否符合规范
		int cnt=1;//cnt用于记录重复次数
		while(std::cin>>Val){//记录接下来的数字，并进入循环
			if(currVal==Val){
				cnt++;//如果输入的数字和开头的数字相同则继续循环，并且重复次数加一
			}else{
				std::cout<<currVal<<"的重复次数为"<<cnt<<"次"<<std::endl;//如果不相同则输出数字和连续的次数
				currVal=Val;//令新的数字作为新的一串数字的开头
				cnt=1;//计数器归为初始状态
			}
		}
		std::cout<<currVal<<"的重复次数为"<<cnt<<"次"<<std::endl;//注意：很容易忘记输出最后一串数字！
	}
	return 0;
}