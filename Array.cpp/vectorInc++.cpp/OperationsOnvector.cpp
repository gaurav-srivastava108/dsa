#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;  //you need not mention the size
    // v.push_back(6);//inserting / input do not use[]
    // cout<<v.size()<<endl; //1
    // v.push_back(2);
    // cout<<v.size()<<endl; //2
    // v.push_back(4);
    // cout<<v.size()<<endl; //3
    //  v.push_back(8);
    //  cout<<v.size()<<endl; //4

    v.push_back(6);
    cout<<v.capacity()<<endl; //1
    v.push_back(2);
     cout<<v.capacity()<<endl; //2
    v.push_back(4);
     cout<<v.capacity()<<endl; //4
     v.push_back(8);
      cout<<v.capacity()<<endl; //4

}