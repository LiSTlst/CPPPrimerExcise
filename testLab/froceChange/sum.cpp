#include <iostream>
using std::cout;
using std::endl;
double sum(int n,...){
	int x;
	double r=0,*p;
	p=(double *)(&n + 1);
	for(int i=0;i<n;i++){
		r+=p[i];
	}
	return r;
}
void main(void){
	double d;
	d=sum(4,1.0,2.0,3.0,4.0);
	cout<<d<<endl;
}