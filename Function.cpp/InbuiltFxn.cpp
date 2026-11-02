#include<iostream>
//  #include<math.h>
using namespace std;
 
int mini(int x, int y){
    int a;
    if (x<y) a=x;
    else a=y;
    return a;
     
}
 int main(){
    //  cout<<sqrt(9);
    int x,y;
    cin>>x>>y;
   cout<< mini(x,y);
}