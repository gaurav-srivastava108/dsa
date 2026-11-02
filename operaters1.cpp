#include<iostream>
using namespace std;
int main(){

int num1=5;

cout<<(num1<<1)<<endl;//multiple by 2(left shift)

cout<<(num1>>1)<<endl;//divide by 2(right shift)

int num2 = 8;
cout<<(num1&num2)<<endl;
cout<<(num1|num2)<<endl;

    return 0;
}