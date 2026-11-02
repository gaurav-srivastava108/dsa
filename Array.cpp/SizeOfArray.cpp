#include<iostream>
using namespace std;
int main(){
    int arr[]={3,5,6,7,4,7,6};
    // int n = sizeof (arr); 
    int n= sizeof (arr)/sizeof(arr[4]);
    cout<<n;
    }