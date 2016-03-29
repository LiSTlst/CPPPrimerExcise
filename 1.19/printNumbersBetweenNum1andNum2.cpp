#include<iostream>
int main(){
  std::cout<<"Enter tow numbers i will print the numbers between them:"<<std::endl;
  int num1=0,num2=0;
  if(!(std::cin>>num1>>num2)){
    std::cout<<"Make sure you entered right data."<<std::endl;
    return -1;
  }
  int max=0,min=0;
  if(num1>num2){
    max=num1;
    min=num2;
  }else{
    max=num2;
    min=num1;
  }
  for(int i=min;i<max;i++){
    std::cout<<i<<std::endl;
  }
  return 0;
}
