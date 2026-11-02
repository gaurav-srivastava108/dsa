#include <iostream>
using namespace std;
int main (){

    int mark;
    cin>>mark;

    if(mark>33){
        cout<<"pass"<<endl;
    }
    else{
        cout<<"fail"<<endl;
    }

    mark>33 ? cout<<"pass"<<endl : cout<<"fail"<<endl;

    return 0;
}