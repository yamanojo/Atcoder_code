#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	ll N,M;
    cin>>N>>M;

    string s;
    ll c;
    vector<unordered_map<string,ll>> dp(M+1);
    string tmp_str = "";
    rep(i,N){
        tmp_str+="N";
    }
    dp[0][tmp_str] = 0;
    rep(i,M){
        cin>>s>>c;
        for(auto v:dp[i]){
            tmp_str = v.first;
            if(dp[i+1].find(tmp_str) == dp[i+1].end()){
                dp[i+1][tmp_str]=v.second;
            }else{
                dp[i+1][tmp_str] = min(dp[i+1][tmp_str],v.second);
            }

            rep(j,N){
                if(s[j]=='Y'){
                    tmp_str[j]='Y';
                }
            }

            if(dp[i+1].find(tmp_str) == dp[i+1].end()){
                dp[i+1][tmp_str] = c + v.second;
            }else{
                dp[i+1][tmp_str] = min(dp[i+1][tmp_str],c + v.second);
            }
        }
    }
    ll ans;
    tmp_str = "";
    rep(i,N){
        tmp_str += "Y";
    }
    if(dp[M].find(tmp_str) == dp[M].end()){
        ans = -1;
    }else{
        ans = dp[M][tmp_str];
    }
    cout<<ans<<"\n";
	return 0;
}