#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter a number : ";
    cin>>n;

    int digits=0;
    int a=n;
    while(n>0){
        digits++; //3
        n=n/10 ;   //0
    }
    if(a==0) cout<<1;
    else cout<< digits  <<endl;
    return 0;
}