#include<iostream>
using namespace std;
int main(){
	int i=0;
	do{
		i++;
		if(i==5){
			continue;
		}
		cout<<i<<endl;
	}while(i<100);
	return 0;
}
