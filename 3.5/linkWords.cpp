#include<iostream>
#include<string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
int main(){
  string word,sentence="";
  while(cin>>word){
    sentence+=word;
    //sentence+=" ";
  }
  cout<<sentence<<endl;
  return 0;
}
