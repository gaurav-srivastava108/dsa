#include<iostream>
using namespace std;
// int main(){
//     // char str[5]={'a','b','c','d','e'};
//     char str[5]="abcd";
//     for(int i=0;i<5;i++){
//         cout<<str[i]<<" ";
//     }
// }


    // int main(){
    //     char str[10]={'a','b','c','d','e'};
    //     cout<<int (str[5]);
    // }

int main(){
    char str[]={'a','b','c','\0','d','e','f'};
    for(int i=0;str[i]!='\0';i++){
        cout<<str[i]<<" ";
    }
    cout<<endl;
    cout<<str<<endl;
    int arr[]={1,2,3,4,5};
    cout<<arr;
}