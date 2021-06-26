#include<iostream>
using namespace std;
 int fibo(int n){
 if(n<=1){
 	return n;
 }
  int fibonaci=fibo(n-1) + fibo(n-2);
 return fibonaci;
}
int main(){
	int a;
	cin>>a;
	cout<<"the fibonaci of a no. "<<endl;
	cout<<fibo(a);
	
	
	return 0; 
}
