#include<iostream>
#include<string>//注意！使用string类型的时候一定要包含string的头文件
using std::cout;
using std::cin;
using std::endl;
using std::string;
int main(){
  string beforeChange("helloWolrd!");
  cout<<"Enter a string you will get a string repleaxed by X: "<<endl;
  cin>>beforeChange;
  for(char &c:beforeChange){
    c='X';
  }
  cout<<"The changed string is "<<beforeChange<<endl;
  /*
  string s("Hello World!!!");
  decltype(s.size()) punct_cnt=0;
  for(auto c:s){
    if(ispunct(c)){
      ++punct_cnt;
    }
  }
  cout<<punct_cnt<<"puncttuation charactetrs in "<<s<<endl;
  */
  return 0;
}
