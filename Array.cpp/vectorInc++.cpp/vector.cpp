#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;  //you need not mention the size
    v.push_back(6);//inserting / input do not use[]
    // v[1] =1;
    v.push_back(2);
    v.push_back(4);
     v.push_back(8);
    cout<<v[0]<<" ";//if you want access/update
    cout<<v[1]<<" ";
    cout<<v[2]<<" ";
    cout<<v[3]<<" ";



}