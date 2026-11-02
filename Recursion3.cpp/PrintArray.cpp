#include<iostream>
#include<vector>
using namespace std;
// void display(int arr[],int n,int idx){
//     if(idx==n) return;
//     cout<<arr[idx]<<" ";
//     display(arr,n,idx+1);
// }
// int main(){
//     int arr[]={4,5,6,3,78,8};
//     int n=sizeof(arr)/sizeof(arr[0]);
//      display(arr,n,0);
// }


// Via vector
void display(vector<int>& v,int idx){
    if(idx==v.size()) return;
    cout<<v[idx]<<" ";
    display(v,idx+1);
}
int main(){
    int arr[]={3,5,7,8,9,4,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int>v(n);
    for(int i=0;i<n;i++){
        v[i]=arr[i];
    }
    display(v,0);
}
