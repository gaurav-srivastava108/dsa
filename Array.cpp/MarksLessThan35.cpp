#include<iostream>
using namespace std;
int main(){
      
        // int marks[7];
        // //Input
        // for(int i=0; i<=6 ;i++){
        //     cin >> marks[i];
        // }
        // for (int i=0 ; i<=6 ; i++){
        //     if(marks[i]<35) cout<<i<<" ";
        // }
     
     int n;
     cout<<"enter no of students :";
     cin>>n;
     int marks[n];
     cout<<"Enter the marks : ";
     //Input
     for (int i=0; i<=n-1 ; i++){
        cin>>marks[i];
     }
    for (int i=0 ;i<=n-1;i++){
        if (marks[i]<35) cout<<i<<" ";
    }
}