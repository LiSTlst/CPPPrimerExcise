#include<iostream>
#include<string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
int main(){
  string words="";
  while(getline(cin,words)){
    cout<<words<<endl;
  }
  /*
  string word="";
  while(cin>>wors)){
    cout<<word<<endl;
  }
   */
  return 0;
}
