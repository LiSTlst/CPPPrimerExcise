#include<iostream>
#include<string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
int main(){
  string s;
  cout<<"Enter the string than the punct will be delect:"<<endl;
  getline(cin,s);
  for(auto &c:s){
    if(ispunct(c)){
      c=' ';
    }
  }
  cout<<"The string delect punct is "<<s<<endl;
  return 0;
}
