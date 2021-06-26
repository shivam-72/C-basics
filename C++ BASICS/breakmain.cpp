#include<iostream>
using namespace std;
int main(){
	int i=0;
	do{
		cout<<i<<endl;
		i++;
		if(i==2){
			break;//break is used to exit from the loop
		}
		
	}while(i<40);
	return 0;
}
