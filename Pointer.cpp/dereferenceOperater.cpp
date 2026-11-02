#include<iostream>
using namespace std;
int main(){
    // int x=122;
    // int* p =&x; // *p -> pointer variable
    // cout<<*p;
    
    int x =122;
    int* p = &x;
    cout<<x<<endl;
    *p =6;//-> x ki value ko update kr do 
    cout<<x;
}