#include<iostream>
#include<string>
using namespace std;
int main(){
    int i;
    string p[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    cin>>i;
    if(i<=9){
            cout<<p[i];
        }
    else if(i>9 && i % 2==0){
    cout<<"even";}
    else{
        cout<<"odd";
    }
    return 0;    
}
