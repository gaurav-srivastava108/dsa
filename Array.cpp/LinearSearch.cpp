#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array : ";
    cin>>n;
    int arr[n];
    for(int i=0 ; i<= n-1; i++){
        cin>>arr[i];

    }
     int x;
     cout<<"Enter the element you want to search : ";
     cin>>x;
      
    bool flag = false; //-> not present
    for(int i=0; i<=n-1; i++){
        if(arr[i]==x) flag = true;
    }
    if (flag==true) cout<<" Yes, element is here ";
    else cout<<"404 element not found ";
      
     //search
     
    //  for(int i=0; i<=n-1; i++){
        
    //     if (arr[i]==x){cout<<"present";
        
    //         break;}   // ans : not present not present not present presentnot present
    //     else {cout<<"not present ";
    //     // break;
    //    }
    //  }
}