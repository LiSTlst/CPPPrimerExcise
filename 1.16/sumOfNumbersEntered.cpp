#include<iostream>
int main(){
  std::cout<<"Enter some numbers you will get the sum of them:"<<std::endl;
  int num=0,sum=0;
  while(std::cin>>num){
    sum+=num;
  }
  std::cout<<"The sum of the numbers you entered is "<<sum<<std::endl;
}
