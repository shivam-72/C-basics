#include<iostream>
#include<iomanip>//to use manipulators setw,setfill,setprecision this is included.
//fixed and scientific is required to show the value in scientific or fixed form.
#include<bits/stdc++.h>
using namespace std;
int main(){
	int a=3;
	double b=290.842;
	cout<<setw(10)<<a<<endl;
	cout<<setw(15)<<fixed<<setprecision(1)<<b<<endl;
	cout<<scientific<<b<<endl;
	cout<<setw(10)<<setfill('*')<<a;
	cout<<endl;
     
	 
	 return 0;	
}
