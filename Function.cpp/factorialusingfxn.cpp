#include<iostream>
using namespace std;
int fact(int i){
   int fact=1;
    for(int j=2;j<=i;j++){
        fact*=j;
    }
    return fact;
}
int main(){
    int n;
    cout<<"Inter the number:";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<< fact(i)<<endl;
    }
}