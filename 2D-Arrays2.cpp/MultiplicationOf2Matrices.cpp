#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter a rows of 1st matrix : ";
    cin>>m;
    int n;
    cout<<"Enter a colums of 1st matrix : ";
    cin>>n;

    int p;
    cout<<"Enter a rows of 2nd matrix : ";
    cin>>p;
    int q;
    cout<<"Enter a colums of  2nd matrix : ";
    cin>>q;

    
    if(n==p){
       int arr[m][n];
       cout<<"Enter elements of 1st matrix : ";
       for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
       } 
        
       int brr[p][q];
       cout<<"Enter elements of 2nd matrix : ";
       for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            cin>>brr[i][j];
        }
       } 
       //resultant matrix
       int res[m][q];
       for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            res[i][j]=0;
            //res[i][j]= arr[i][0]*brr[0][j]+arr[i][1]*brr[1][j]+.....
            for(int k=0;k<p;k++){
                res[i][j]+=arr[i][k]*brr[k][j];
            }
            
        }
       }
       //print
       for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
       }
    
    
     }
     if(n!=p) {
         cout<<"Cannot multiplication of this matrices : ";
    }
     
}