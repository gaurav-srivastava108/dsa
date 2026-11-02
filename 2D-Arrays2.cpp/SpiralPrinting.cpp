#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter a rows of 1st matrix : ";
    cin>>m;
    int n;
    cout<<"Enter a colums of 1st matrix : ";
    cin>>n;

    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
        // cout<<endl;
    }
    cout<<endl;
    int minr=0;
    int maxr=m-1;
    int minc=0;
    int maxc=n-1;
    while(minr<=maxr && minc<= maxc){
        //right ja rhe h tb ke liye
        for(int j=minc;j<=maxc;j++){
            cout<<arr[minr][j]<<" ";
            
            if(minr>maxr || minc>maxc) break;
        }
        minr++;
        
        //down ja rhe hai tb ke liye
        for(int i=minr;i<=maxr;i++){
            cout<<arr[i][maxc]<<" ";
            if(minr>maxr || minc>maxc) break;
        }
        maxc--;
        //left ja rhe hai tb ke liye
        for(int j=maxc;j>=minc;j--){
            cout<<arr[maxr][j]<<" ";
            
            if(minr>maxr || minc>maxc) break;
        }
        maxr--;
        //up ja rhe hai tb ke liye
        for(int i=maxr;i>=minr;i--){
            cout<<arr[i][minc]<<" ";
            
            if(minr>maxr || minc>maxc) break;
        }
        minc++;
    }

}