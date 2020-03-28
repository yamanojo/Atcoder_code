#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	
	ll N,T;
	cin>>N>>T;
    typedef pair<ll,ll> P;
    vector<P> AB(N);
    ll max_b = 0;
    rep(i,N){
        ll a,b;
        cin>>a>>b;
        AB[i] = P(a,b);
    }
    sort(AB.begin(),AB.end(),[](P p1,P p2){return p1.first < p2.first;});

    vector<vector<ll>> dp(N,vector<ll>(T));
    ll ans = AB[0].second;
    rep(i,N){
        ll a = AB[i].first;
        ll b = AB[i].second;
        if(i!=0) ans = max(ans,dp[i-1][T-1]+b);
        rep(j,T){
            if(j-a<0){
                if(i==0) continue;
                dp[i][j] = dp[i-1][j];
            }else{
                if(i==0){
                    dp[i][j]= b;
                    continue;
                }
                dp[i][j] = max(dp[i-1][j],dp[i-1][j-a]+b);
            }

        }
    }
    cout<<ans<<"\n";


	return 0;
}
