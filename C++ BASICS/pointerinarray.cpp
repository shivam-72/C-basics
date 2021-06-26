#include<iostream>
using namespace std;
int main(){
	int arr[]={10,20,30};
	cout<<*arr<<endl;//*arr behaves as a pointer and variable arr stores the adress of array.
	int *ptr=arr;
	for( int i=0;i<3;i++){
	 cout<<*ptr<<endl;
	 ptr++;
   }return 0;	
}
