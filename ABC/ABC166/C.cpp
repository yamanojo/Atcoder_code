#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
    ll N,M;
    cin>>N>>M;

    vector<ll> H(N);
    rep(i,N){
        cin>>H[i];
    }

    ll a,b;
    vector<vector<ll>> ab(N);
    rep(i,M){
        cin>>a>>b;
        --a;
        --b;
        ab[a].push_back(b);
        ab[b].push_back(a);

    }
    ll ans = 0;
    vector<ll> flag(N);
    ll tmp_ans;
    rep(i,N){
        if(flag[i]==1) continue;
        tmp_ans = 1;
        for(auto v:ab[i]){
            if(H[i]<=H[v]){
                tmp_ans = 0;
                break;
            }
        }
        ans += tmp_ans;
    }

    cout<<ans<<"\n";
	

	
	return 0;
}