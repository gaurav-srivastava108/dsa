#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<sstream>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    string temp;
    stringstream ss(str);
    vector<string>v;
    while(ss>>temp){
        v.push_back(temp);
    }
    //vector print
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    cout<<endl;
    sort(v.begin(),v.end());
    //vector print
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
}