//computer skips statement under continue and transfer the control to the condition part of the while
//and do while whereas in for loop control is transfered to theincreament/decreament part.
#include<iostream>
using namespace std;
int main(){
	int i=0;
	while(i<100){
		i++;
		if(i==9){
			continue;
		}
		cout<<i<<endl;
	}
	return 0;
}
