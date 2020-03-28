#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	
	ll A,B,M;
	cin>>A>>B>>M;
    vector<ll> va(A),vb(B);
    ll min_a,min_b;
    rep(i,A){
        cin>>va[i];
        if(i==0) min_a = va[0];
        min_a = min(min_a,va[i]);
    }
    rep(j,B){
        cin>>vb[j];
        if(j==0) min_b = vb[0];
        min_b = min(min_b,vb[j]);
    }
    ll ans = min_a + min_b;
    ll x,y,c;
    rep(i,M){
        cin>>x>>y>>c;
        ans = min(ans,va[x-1]+vb[y-1]-c);
    }

    cout<<ans<<"\n";
	
	return 0;
}