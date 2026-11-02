// #include<iostream>
// using namespace std;
// void fun(int n){
//     if(n==0) return;
//     cout<<"Hello ** Gaurav Srivastava **";
//     cout<<endl;
//     fun(n-1);
// }
// int main(){
//     fun(3);
// }


//class work 
#include<iostream>
using namespace std;
void fun(int n){
    if(n==0) return;
    cout<<"Hello ** Gaurav Srivastava **";
    cout<<endl;
    fun(n-1);
}
int main(){
    int n;
    cout<<"Enter a number: "<<endl;
    cin>>n;
    fun(n);
}