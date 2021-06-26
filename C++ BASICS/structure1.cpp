//here typedef is used so in main function we cam use shortcut in place of struct student
#include<iostream>
using namespace std;
struct student{
//typedef struct student{ 
   int id;
   char favchar;
   float salary;
}shortcut;
int main(){
//	shortcut shivam ;
    struct student shivam;
	shivam.id=1;
	shivam.favchar='p';
	shivam.salary=15000;
	cout<<shivam.id<<endl;
	cout<<shivam.salary<<endl;
	return 0;
}
