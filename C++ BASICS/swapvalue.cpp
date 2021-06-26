#include<iostream>
using namespace std;

/*void swap(int a,int b){     //this function will not run now because only x and y is copied in the swap
int temp=a;                    //but not the value of x nd y because it is void.
a=b;
b=temp;
}*/
void swappointer(int* a,int* b){
	int temp =*a ;
	*a=*b ;
	*b=temp;
}
int main(){
	int x=5,y=9;
    cout<<"the value of x is "<<x<<" the value of b "<<y<<endl;
   // swap(x,y);// this will not swap a and b,
     swappointer(&x,&y);
    cout<<"the swap value of x is "<<x<<" the swap value of y "<<y<<endl;
	return 0;
}
