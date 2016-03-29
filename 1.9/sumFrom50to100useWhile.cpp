#include<iostream>
int main(){
  int i=50,sum=0;
  while(i<101){
    i++;
    sum+=i;
  }
  std::cout<<"The sum from 50 to 100 = "<<sum<<std::endl;
}
