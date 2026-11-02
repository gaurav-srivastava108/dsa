#include<iostream>
#include<vector>
using namespace std;
int main(){
    // vector<int> v(5);  // Agar size na de tb segmentation error aa jaega
    // for(int i=0 ; i<5 ; i++){
    //     cin>>v[i];

    // }
    // for(int i=0 ;i<5 ;i++){
    //     cout<<v[i]<<" ";
    // }
                            // Input without Giving size(using 3rd variable & v.push_back(x))
    vector<int>v;
    for(int i=0; i<v.size(); i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    for (int i=0 ; i<v.size();i++){
        cout<<v[i]<<" ";                //Tb no error occurs but instead of i<v.size() -> i<5 Tb eror aa jaega
    }
}
