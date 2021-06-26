#include<iostream>
using namespace std;
int main(){
	int a=8;
	int* b=&a;
	cout<<"the adress of a is : "<<&a<<endl;
	cout<<" the adress of b is : "<<b<<endl;
	cout<<" the value of b is : "<<*b;
	
	return 0;
	
}
