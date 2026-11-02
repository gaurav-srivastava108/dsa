#include<iostream>
using namespace std;
// void power(int a,int b){
//     if(b==0) return 1;
//     return a*power(a,b-1);
// }
// int main(){
//     cout<<power(3,4);
// }
int pow(int a,int b){
    if(b==0) return 1;
    return a* pow(a,b-1);
}
int main(){
    int a;
    cout<<"Enter base: ";
    cin>>a;
    int b;
    cout<<"Enter Exponent :";
    cin>>b;
    cout<<a<<" raised to the power "<<b<<" is "<<pow(a,b);
}