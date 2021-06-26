#include<iostream>
using namespace std;
int sum(int a){
	if (a==0){
	return 0;}
	int number=a+sum(a-1);
	return number;
}
int main(){
int n;
cin>>n;
cout<<sum(n);

return 0;
}
