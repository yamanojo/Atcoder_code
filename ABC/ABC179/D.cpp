#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;

ll MOD = 998244353;

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	
    ll N,K;
    cin>>N>>K;
    typedef pair<ll,ll> P;
    vector<P> lr(K);
    rep(i,K){
        ll l,r;
        cin>>l>>r;
        ++r;
        lr[i] = P(l,r);
    }

    vector<ll> dp(N);
    dp[0] = 1;
    dp[1] = -1;

    rep(i,N){
        if(i>0) dp[i] += dp[i-1];
        rep(j,K){
            ll l,r;
            l = lr[j].first;
            r = lr[j].second;
            // if(i+l<N) dp[i+l]+= dp[i];
            // if(i+r<N) dp[i+r]-= dp[i];
            if(i+l<N) dp[i+l]= (dp[i+l]+ dp[i])%MOD;
            if(i+r<N) dp[i+r]= (dp[i+r]-dp[i])%MOD;
            // if(i+r<N){
            //     dp[i+r] -= dp[i];
            //     if(dp[i+r]<0) dp[i+r]+=MOD;
            //     else dp[i+r]%=MOD;
            // }
        }
    }
    ll ans = dp[N-1]%MOD;
    if (ans<0) ans +=MOD;
    cout<<ans<<"\n";

	return 0;
}