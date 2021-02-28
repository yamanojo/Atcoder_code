#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;
typedef pair<ll,ll> P;
int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	ll N,M,S;
    cin>>N>>M>>S;
    ll max_a = 0;
    vector<vector<ll>> uv(N);
    ll cost[N][N] = {};
    ll delay[N][N] = {};
    rep(i,M){
        ll u,v,a,b;
        cin>>u>>v>>a>>b;
        --u;--v;
        uv[u].push_back(v);
        uv[v].push_back(u);
        cost[u][v] = cost[v][u] = a;
        delay[u][v] = delay[v][u] = b;
        max_a = max(max_a,a);
    }
    vector<ll> C(N),D(N);
    rep(i,N){
        cin>>C[i]>>D[i];
    }
    ll ans[N] = {};

    deque<ll> pos,coin,sum_time;
    pos.push_back(0);
    ll max_coin = max_a*(N-1);
    if(S>max_coin){
        S = max_coin;
    }
    coin.push_back(S);
    sum_time.push_back(0);

    
    ll dp[N][max_coin+1];
    rep(i,N){
        rep(j,max_coin+1){
            dp[i][j] = -1;
        }
    }
    ll p,c,t;
    ll arrival_t,money;
    while(!pos.empty()){
        p = pos.front();pos.pop_front();
        c = coin.front();coin.pop_front();
        t = sum_time.front();sum_time.pop_front();
        
        for(auto next:uv[p]){
            if(c>= cost[p][next]){
                arrival_t = t + delay[p][next];
                money = c - cost[p][next];
                if(dp[next][money] == -1 || dp[next][money]>arrival_t){
                    dp[next][money] = arrival_t;
                    if(ans[next]==0){
                        ans[next]= arrival_t;
                    }else{
                        ans[next] = min(ans[next],arrival_t);
                    }
                    pos.push_back(next);
                    coin.push_back(money);
                    sum_time.push_back(arrival_t);
                }
            }
        }
        
        while(c!=max_coin){
            c += C[p];
            t += D[p];
            if(c>max_coin){
                c = max_coin;
            }
            if(dp[p][c]==-1||dp[p][c]>t){
                dp[p][c]=t;
                pos.push_back(p);
                coin.push_back(c);
                sum_time.push_back(t);
            }else{
                break;
            }
        }
    }

    rep(i,N-1){
        cout<<ans[i+1]<<"\n";
    }

    return 0;
}
