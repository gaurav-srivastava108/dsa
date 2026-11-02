#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Number of rows: ";
    cin>>n;
    int str=1;
    int spc=n-1;
    for(int i=1;i<=2*n-1;i++){
        //space ke liye
        for(int j=1;j<=spc;j++){
            cout<<" ";
        }
        if(i<=n-1) spc--;
        else spc++;
        //star ke liye
        for(int k=1;k<=str;k++){
            cout<<"k";
        }
        if(i<=n-1) str+=2;
        else str-=2;
        cout<<endl;
    }
    
}