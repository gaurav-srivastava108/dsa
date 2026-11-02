#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int N,K,P;
	    cin>>N >> K >>P;
	    vector<int>arr(N);
	    for(int i=0;i<N;i++){
	        cin>>arr[N];
	    }
	    sort(arr.begin(),arr.end());
	    int vedh=K+arr[0];
	    int varunh=P;
	    for(int i=1;i<N;i++){
	        varunh+=arr[i];
	    }
	    if(vedh>varunh){
	        cout<<"ved\n";
	    }
	    
	  else if(varunh>vedh)cout<<"varun\n";
	  else cout<<"equal\n";
	}

}
