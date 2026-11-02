#include<iostream>
using namespace std;
void display(int a[]){
    int size = sizeof (a) / sizeof (a[0]);
    for(int i=0; i<=4 ; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return;
}
void change(int b[]){
    b[0] =100;
}
int main(){
    int arr[5] = {1,4,5,6,35};
    int size = sizeof (arr);// int size = sizeof (arr[0]);
    //acccessing the elements of array in another fxn
    // updation seven pass by value / reference? -> pass by reference ki tarah hota hain
    display(arr);
    change(arr);
    display(arr);
}