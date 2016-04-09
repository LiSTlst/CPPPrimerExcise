#include <iostream>
using std::cout;
using std::endl;
void sum(int n,...){
	char** p;
	p=(char **)(&n+1);
	for(int i=0;i<n;i++){
		cout<<p[i]<<endl;
	}
}
int main(void){
	sum(4,"one","two","three","four");
}