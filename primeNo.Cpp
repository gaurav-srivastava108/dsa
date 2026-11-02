#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int i = 2;
    while( i<n){
        if(n % 1 ==0){
            cout<<"not prime"<<end;
        }
        else{
            cout<<"prime for "<< i <<endl;
        }
        i = i+1;
    }
}