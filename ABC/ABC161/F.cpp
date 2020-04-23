#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	
	ll N;
	cin>>N;
    ll ans=0;

    ans += factor(N-1).size()-1;
    set<ll> st;
    st = factor(N);

    for(auto v: st){
        if(v == 1) continue;
        ll n = N;
        while(n%v==0){
            n/=v;
        }
        if(n%v==1){
            ++ans;
        }
    }

    cout<<ans<<"\n";

    
	
	return 0;
}