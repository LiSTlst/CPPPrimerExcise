#include <iostream>
#include <vector>//使用vector的时候一定要引用vector头文件

using std::vector;
using std::cout;
using std::cin;
using std::endl;

int main(){
	int num;
	cout<<"Enter numbers and this program will push them to a vector:"<<endl;
	vector<int> numbers;
	while(cin>>num){
		numbers.push_back(num);
	}
	cout<<"here is your numbers:";
	for(auto num:numbers){
		cout<<num<<endl;//注意，这里如果不加入endl的话就会输出乱码
	}
	return 0;
}