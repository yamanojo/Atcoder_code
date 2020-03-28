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
    rep(i,N/2){
        S+="012";
    }

    ll dp[N][P] = {};
    ll n = ctoll(S[0])%P;
    ll ans = 0;
    dp[0][n]+=1;
    ans += dp[0][0];
    ll tmp_x;
    rep(i,N-1){
        n = ctoll(S[i+1])%P;
        ++dp[i+1][n];
        rep(j,P){
            tmp_x = (j*10+n)%P;
            dp[i+1][tmp_x] += dp[i][j];
        }
        ans += dp[i+1][0];
    }
    cout<<ans<<"\n";
	return 0;
}