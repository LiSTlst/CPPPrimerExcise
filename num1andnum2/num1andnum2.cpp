#include<iostream>
int main(){
	int num1,num2;
	/*
	 *在这里原本是一条很长的输出操作语句
	 *改成了多条短的独立输出操作语句
	 *如果有兴趣的话你也可以把它恢复回长输出操作语句的形式
	 */

	std::cout<<"Enter num1 and num2:"<<std::endl;
	std::cin>>num1>>num2;
	std::cout<<"num1 * num2 = ";
	std::cout<<num1*num2;
	std::cout<<" and num1 + num2 = ";
	std::cout<<num1+num2;
	std::cout<<" and num1 - num2 = ";
	std::cout<<num1-num2;
	std::cout<<" and num1 / num2 = ";
	std::cout<<num1/num2;
	std::cout<<std::endl;//最后写入endl，进行缓冲刷新，保证所有的输出都真正的写入了输出流中
}