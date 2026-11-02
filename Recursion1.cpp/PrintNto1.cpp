#include<iostream>
using namespace std;
void print(int n){
    if(n==0) return;//Base case
    cout<<n<<endl;//Kaam krwao
    print(n-1);//Call
}
int main(){
    print(6);
}