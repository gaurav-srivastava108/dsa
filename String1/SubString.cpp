#include<iostream>
#include<string>
using namespace std;
int main(){
    string s="avcdef";
    // s.substr(idx,len)
    cout<<s.substr(2,2)<<endl;
    cout<<s.substr(2);
}