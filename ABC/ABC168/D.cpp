#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	ll N,M;
    cin>>N>>M;
    vector<vector<ll>> AB(N);
    ll a,b;
    rep(i,M){
        cin>>a>>b;
        --a;--b;
        AB[a].push_back(b);
        AB[b].push_back(a);
    }
    typedef pair<ll,ll> P;
    vector<ll> ans(N);
    ans[0] = -1;
    deque<ll> q;
    q.push_back(0);
    while(!q.empty()){
        a = q.front();
        q.pop_front();
        for(auto v:AB[a]){
            if(ans[v]==0){
                ans[v] = a+1;
                q.push_back(v);
            }
        }
    }
    cout<<"Yes"<<"\n";
    rep(i,N-1){
        cout<<ans[i+1]<<"\n";
    }

	
	return 0;
}