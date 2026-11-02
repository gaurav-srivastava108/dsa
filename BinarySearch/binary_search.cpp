#include<iostream>
#include<vector>
using namespace std;
int main(){
        int arr[]={1,2,4,5,9,15,18,21};
        int target,lo=0,hi=7;
        cin>>target;
        bool flag= false;
        while(lo<=hi){
            int mid=lo+hi/2;
            if(arr[mid]==target){
                flag=true;
                cout<<arr[mid];
                break;
            }
            else if (arr[mid]>target) hi=mid-1;
            else lo=mid+1;
        }
        if(flag==false) cout<<"not prensent ";
        
}