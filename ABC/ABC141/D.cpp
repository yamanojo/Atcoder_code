#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	ll N,M;
	cin>>N>>M;
    priority_queue<ll> que;
    rep(i,N){
        ll a;
        cin>>a;
        que.emplace(a);
    }
    ll ans = 0;
    while(M>0){
        ll tmp_a;
        tmp_a = que.top();que.pop();
        tmp_a = tmp_a/2;--M;
        que.emplace(tmp_a);
    }

    while(!que.empty()){
        ll tmp_a;
        tmp_a = que.top();que.pop();
        ans+=tmp_a;
        
    }
    
    cout<<ans<<"\n";
    
    return 0;
}

