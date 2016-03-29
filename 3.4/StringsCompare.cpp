#include<iostream>
#include<string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
int main(){
  string word1,word2;
  if(cin>>word1>>word2){
    if(word1==word2){
      cout<<"The tow word are the same."<<endl;
    }else{
      word1>word2?cout<<word1<<endl:cout<<word2<<endl;
    }
    if(word1.size()==word2.size()){
      cout<<"The length of the two words are the same is "<<word1.size()<<endl;
    }else{
      word1.size()>word2.size()?cout<<word1.size()<<endl:cout<<word2.size()<<endl;
    }
  }else{
    cout<<"Make sure you entered currect data."<<endl;
    return -1;
  }
  return 0;
}
