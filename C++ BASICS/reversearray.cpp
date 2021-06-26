#include<iostream>
using namespace std;
int main(){
	int count,input[500],output[500],i;
	cin>>count;
	for(  i=0;i<count;i++){
		cin>>input[i];
		cout<<input[i]<<endl;
		i++;
	}
/*	for(i=0;i<count;i++){
	output[i]=input[count-i-1];
	}
	for(i=0;i<count;i++){
		cout<<output[i]<<" ";
	}*/
	
	
	
	return 0;
}
