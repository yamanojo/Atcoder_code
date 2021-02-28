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
    ll u,v,a,b;
    vector<vector<ll>> uv(N);
    ll cost[N][N] = {};
    ll A[N][N] = {};
    ll B[N][N] = {};
    rep(i,M){
        cin>>u>>v>>a>>b;
        --u;
        --v;
        uv[u].push_back(v);
        uv[v].push_back(u);
        B[u][v] = B[v][u] = b;
        A[u][v] = A[v][u] = a;
    }
    ll c,d;
    vector<P> cd(N);
    rep(i,N){
        cin>>c>>d;
        cd[i] =P{c,d};
    }

    ll min_t[N];
    rep(i,N){
        min_t[i] = 1e13;
    }
    min_t[0] = 0;

    
    ll ans = 


	

	
	return 0;
}