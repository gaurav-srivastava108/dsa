#include<iostream>
#include<climits>
using namespace std;
int main(){
int n;
cout<<"size of array : ";
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
// int min=1;
// for(int i=0;i<n;i++){
//     if(min>arr[i]) min=arr[i];
// }
// int smin=1;
// for(int i=0;i<n;i++){
//     if(smin>arr[i] && arr[i]!=min) smin=arr[i];
// }
// cout<<min<<endl;
// cout<<smin;
int min=INT_MAX;
for(int i=0;i<n;i++){
    if(min>arr[i]) min=arr[i];
}
int smin=INT_MAX;
for(int i=0;i<n;i++){
     if(smin>arr[i] && arr[i]!=min) smin=arr[i];

}
cout<<min<<endl;
cout<<smin;
}