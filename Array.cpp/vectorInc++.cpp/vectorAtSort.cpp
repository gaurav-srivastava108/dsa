#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int>v;
    v.push_back(9);
    v.push_back(4);
    v.push_back(6);
    v.push_back(7);
    v.push_back(2);
    int n=v.size();
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    sort(v.begin(),v.end());
      for(int i=0;i<n;i++){
        cout<<v.at(i)<<" ";
    }
}

