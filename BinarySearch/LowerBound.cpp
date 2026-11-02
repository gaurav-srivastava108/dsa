#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={1,2,4,5,9,15,18,21,24};
    int lo=0,hi=8;
    int target=9;
    // cin>>target;
    bool flag=false;
    while(lo<=hi){
        int mid =lo+(hi-lo)/2;
        if(arr[mid]==target){
            flag=true;
            cout<<arr[mid-1];
            break;
        }
        else if(arr[mid]<target)lo=mid+1; 
        else hi=mid-1;
    }
    if(flag==true) cout<<arr[hi];

}