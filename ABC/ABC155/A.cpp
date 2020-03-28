#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	
	ll A,B,C;
	cin>>A>>B>>C;
    string ans = "No";
    if(A==B){
        if(B!=C){
            ans = "Yes";
        }
    }else{
        if(B==C){
            ans ="Yes";
        }else if(A==C){
            ans ="Yes";
        }
    }
    cout<<ans<<"\n";
	
	return 0;
}