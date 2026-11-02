#include<iostream>
#include<string>
using namespace std;
// void removeChar(string ans, string original){
//      if(original.length()==0){
//         cout<<ans;
//         return;
//      }
//      char Ch=original[0];
//      if(Ch=='a') removeChar(ans,original.substr(1)); 
//      else removeChar(ans+Ch,original.substr(1));
// }
// int main(){
//     string str="gaurav kumar";
//     removeChar("",str);
// }
void removechar(string ans,string original,int idx){
    if(idx==original.length()){
        cout<<ans;
        return;
    }
    char ch=original[idx];
    if(ch=='a') removechar(ans,original,idx+1);
    else removechar(ans+ch,original,idx+1);
}
int main(){
    string str ="gaurav kumar";
    removechar("",str,0);
}