#include<iostream>
using namespace std;
int sum(int n){
	if(n==0){
		return 0;
	} return n + sum(n-1);
}
int main(){
	int a;
	cout<<"enter the no."<<endl;
	cin>>a;
	cout<<"the sum of all number "<<sum(a);
	
	
	return 0;
}
