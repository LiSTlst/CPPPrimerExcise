#include<iostream>
int main(){
  std::cout<<"Enter tow int type numbers,make sure that num1 is smaller than num2:"<<std::endl;
  int num1=0,num2=0;
  std::cin>>num1>>num2;
  int i=num1;
  while(i<num2){
    i++;
    std::cout<<i<<std::endl;
  }
}
