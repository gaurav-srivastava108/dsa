#include<iostream>
using namespace std;
int main(){
    int arr[]={0,1,2,3,6,7,8,9,11};
    int n=9,ans=-1;
    int lo =0,hi=8;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==mid) lo=mid+1;
        else{
            ans=mid;
            hi=mid-1;
        }
    }
    cout<<ans<<endl;

}