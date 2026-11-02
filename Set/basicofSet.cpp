#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<int>s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.erase(3);
    int target=40;
    //s.find() -> it searches in the set, and if
    //it is not found then it returns the last element

    if(s.find(target)!=s.end()){//target exits
        cout<<"exists"<<endl;
    }
    else cout<<"does't exist\n";
    for(int ele:s){
        cout<<ele<<" ";
    }
}