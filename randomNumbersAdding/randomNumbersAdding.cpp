#include <iostream>
int main(){
	int sum=0,value=0;
	std::cout<<"Enter the numbers you want to add:";
	while(std::cin>>value){
		sum += value;
	}
	std::cout<<"the sum is "<<sum<<std::endl;
}