#include<iostream>
using namespace std;
// void printmax(int arr[],int n,int idx,int max){
//      if(idx==n){
//         cout<<max;
//         return;
//      }
//      if(max<arr[idx]) max=arr[idx];
//      printmax(arr,n,idx+1,max);
// }
// int main(){
//     int arr[]={4,5,6,7,8,3,2};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     printmax(arr,n,0,INT_MIN);
// }


//ab hum chahte h ki ek esa fxn likhe jo maximum value ko store kre.
int maxInArray(int arr[],int n,int idx){
    if(idx==n) return INT_MIN;
    return max(arr[idx],maxInArray(arr,n,idx+1));
}
int main(){
    int arr[]={5,6,7,8,6,4,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<maxInArray(arr,n,0);

}