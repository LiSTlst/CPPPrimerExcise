#include <iostream>
int main(){
	int i=50,sum=0;
	while(i<=100){
		sum+=i;
		i++;
	}
	std::cout<<"the sum of 50~100 = "<<sum<<std::endl;
}