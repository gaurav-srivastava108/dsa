#include<iostream>
using namespace std;
void fun(int x, int y){
    cout<<"address of fun x"<<&x<<endl;//x0x16f5f738c
    cout<<"address of fun y"<<&y<<endl;//y0x16f5f7388
}
int main(){
    int x=3;
    int y=7;
    cout<<"address of main x"<<&x<<endl;//x0x16f5f73cc
    cout<<"address of main y"<<&y<<endl;//y0x16f5f73c8
    fun(x,y);
}
//1->>
// void fun(int x=7, int y=8){
//     cout<<x<<" "<<y;// 7 is default value of x and 8 is default value of y
// }
// int main(){
//     fun();
// }
// 2->>
// void fun(int x=7,int y=8){
//     cout<<x<<" "<<y;
// }
// int main(){
//     fun(4,6);
// }
// 3->>
// void fun(int x=7, int y=8){
//     cout<<x<<" "<<y;
// }
// int main(){
//     fun(5);
// }
// 4->>
// void fun(int x=7,int y){
//     cout<<x<<" "<<y<<" "<<z;
// }
// int main(){
//     fun(5,6);
// }
// 5->>
// void fun(int x=8,float y=3.1){
//     cout<<x<<" "<<y;
// }
// int main(){
//     fun();
// }