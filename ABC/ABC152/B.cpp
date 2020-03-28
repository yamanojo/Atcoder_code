#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	
	ll a,b;
	cin>>a>>b;
    string ans="";
    if(a<b){
        rep(i,b){
            ans = ans + to_string(a);
        }
    }else{
        rep(i,a){
            ans = ans + to_string(b);
        }
    }
    cout<<ans<<"\n";
	
	return 0;
}
