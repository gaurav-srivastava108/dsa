#include<iostream>
using namespace std;
int main()
{int n;
cout<<"Enter row number: ";
cin>>n;
//2n-1 stars ke liye 
for(int i=1;i<=2*n-1;i++){
    cout<<i;
}
cout<<endl;
//next line ke liye 
int m=n-1;
int spc=1;
for(int i=1;i<=n-1;i++){
    //number ke liye          cout<<j krke bhi kr skte hai
    int a=1;
    for(int j=1;j<=m+1-i;j++){
        cout<<a;
        a++;
    }
    //spaces
    for(int k=1;k<=spc;k++){
        cout<<" ";
        // a++;
    }
    spc+=2;
    //number ke liye        cout<<j krke bhi kr skte hai
    for(int j=1;j<=m+1-i;j++){
        cout<<a;
        a++;
    }
    cout<<endl;
}}

