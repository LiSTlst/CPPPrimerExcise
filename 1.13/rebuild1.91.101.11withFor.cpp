#include<iostream>
int main(){
  //1.9
  int sum=0;
  for(int i=50;i<101;i++){
    sum+=i;
  }
  std::cout<<"The sum from 50 to 100 is "<<sum<<std::endl;
  //1.10
  for(int i=10;i>=0;i--){
    std::cout<<i<<std::endl;
  }
  //1.11
  int num1=0,num2=0;
  std::cin>>num1>>num2;
  for(int i=num1;i<num2;i++){
    std::cout<<i<<std::endl;
  }
}
