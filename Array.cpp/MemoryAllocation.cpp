#include<iostream>
using namespace std;
int main(){
     int arr[4];
    //  cout<<&arr[0]<<endl; 
    //  cout<<&arr[1]<<endl;
    //  cout<<&arr[2]<<endl;
    //  cout<<&arr[3]<<endl;

// 0x16fc5f348
// 0x16fc5f34c
// 0x16fc5f350
// 0x16fc5f354
    
    cout<<&arr[0]<<endl; // &arr or arr ya fir &arr[0] are same output address
     cout<<&arr[1]<<endl;// array ka address actyall me array ke first element ke first byte ka address hota hai 
     cout<<&arr[2]<<endl;
     cout<<&arr[3]<<endl;

// 0x16d7b3348  
// 0x16d7b334c
// 0x16d7b3350
// 0x16d7b3354
    }