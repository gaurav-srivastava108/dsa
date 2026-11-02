#include<iostream>
#include<vector>
using namespace std;
void display (vector <int> &a){
    for(int i =0; i<a.size(); i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void reversepart(int i, int j, vector <int> &a){
    while(i<=j){
        int temp =v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
    return;
}
itn main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);

    display(v);
    reversepart(0,2,v);
    display(v);

}