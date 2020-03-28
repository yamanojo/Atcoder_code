#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;

ll ctoll(char a){
    return (ll)a-'0';
}

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	ll N,P;
	cin>>N>>P;
    string S;
    cin>>S;
    vector<unordered_map<ll,ll>> dp(N);

    ll ans= 0;
    ll n = ctoll(S[0])%P;
    if(n==0) ++ans;

    ++dp[0][n];

    ll tmp_x;
    rep(i,N-1){
        n = ctoll(S[i+1])%P;
        ++dp[i+1][n];
        for(auto v:dp[i]){
            tmp_x = (v.first*10+n)%P;
            dp[i+1][tmp_x]+=v.second;
        }
        if(dp[i+1].find(0ll)!=dp[i+1].end()){
            ans += dp[i+1][0];
        }
    }

    cout<<ans<<"\n";
	return 0;
}