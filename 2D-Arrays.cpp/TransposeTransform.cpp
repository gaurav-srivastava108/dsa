#include<iostream>
using namespace std;
int main(){ 
    int m;
    cout<<"Enter a number of rows/colums: ";
    cin>>m;
    
    int arr[m][m];
    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=m-1;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=m-1;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
     // transpose in the same matrix
    for(int i=0;i<m;i++){
        for(int j=i+1;j<m;j++){
              int tem=arr[i][j];
             arr[i][j]=arr[j][i];
             arr[j][i]=tem;

        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cout<<  arr[i][j]<<" " ;
        }
        cout<<endl;
    }

}