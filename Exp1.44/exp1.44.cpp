#include<iostream>
int main(){
  int currVal=0,val=0,i=1;
  if(std::cin>>currVal){
    while(std::cin>>val){
      if(val==currVal){
        ++i;
      }else{
        std::cout<<currVal<<"'s "<<"repead times is "<<i<<std::endl;
        currVal=val;
        i=1;
      }
    }
    std::cout<<currVal<<"'s"<<"repead times is "<<i<<std::endl;
  }
  return 0;
}
