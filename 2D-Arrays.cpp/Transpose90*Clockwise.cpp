#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter no of rows/colums : ";
    cin>>m;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=0;i<m;i++){
        for(int j=i+1;j<n;j++){
             int tem=arr[i][j];
             arr[i][j]=arr[j][i];
             arr[j][i]=tem;
        }
         
    }
    for(int k;k<m;k++){
        int i=0;
        int j=n-1;
        while(i<=j){
            int tem=arr[k][i];
            arr[k][i]=arr[k][j];
            arr[k][j]=tem;
            i++;
            j--;
        }
         
    } 
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }
    cout<<endl;
}