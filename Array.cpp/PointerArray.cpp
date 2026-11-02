#include<iostream>
using namespace std;
int main(){
    // int arr[]={4,2,6,1,7};
    // int* ptr = arr;
    // cout<<ptr<<endl;//0x16b0ff350  
    // cout<<&arr[0];//0x16b0ff350%

//     int arr[] ={4,2,6,1,7};
//     int* ptr = arr;//0x16b0ff350%
//     cout<<ptr<<endl;//4
//     cout<<ptr[0];

int arr[] ={4,2,6,1,7};
int* ptr = arr;//  giving address
cout<<ptr<<endl;
ptr[2]= 8;  //update hua h yha pr
for(int i=0; i<=4;i++){
     cout<<ptr[i]<<" ";     // agr kisi pointer ko array ka address de to us pointer ke paas poora aukat h us array ko use krne ki
  }
 }