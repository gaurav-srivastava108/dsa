#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<sstream>
using namespace std;
int main(){
    // string str="gaurav is a maths student also passinate to learn DSA!";
    // stringstream ss(str);
    // string temp;
    // while(ss>>temp){
    //     cout<<temp<<endl;
    // }

    string str;
    getline(cin,str);
    string temp;
    stringstream ss(str);
    while(ss>>temp){
        cout<<temp<<endl;
    }
}

