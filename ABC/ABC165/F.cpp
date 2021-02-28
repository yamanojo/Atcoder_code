#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
    ll N;
    cin>>N;
    vector<ll> A(N);

    rep(i,N){
        cin>>A[i];
    }
    vector<vector<ll>> uv(N);
    ll u,v;

    rep(i,N-1){
        cin>>u>>v;
        --u;--v;
        uv[u].push_back(v);
        uv[v].push_back(u);
    }
    deque<ll> q;
    deque<ll> q_a;
    deque<ll> now_sum,max_sum;
    q.push_back(0);
    q_a.push_back(1);
    now_sum.push_back(0);
    max_sum.push_back(1);
    vector<ll> ans(N);
    ll ind,a,s,ms;
    while(!q.empty()){
        ind = q.front();q.pop_front();
        a = q_a.front();q_a.pop_front();
        s = now_sum.front();now_sum.pop_front();
        ms = max_sum.front();max_sum.pop_front();
        if(A[ind]>=a){
            ++s;
        }else{
            s = 1;
        }
        ms = max(ms,s);
        ans[ind] = ms;
        for(auto next:uv[ind]){
            if(ans[next]==0){
                q.push_back(next);
                now_sum.push_back(s);
                max_sum.push_back(ms);
                q_a.push_back(A[ind]);
            }
        }
    }

	rep(i,N){
        cout<<ans[i]<<"\n";
    }

	
	return 0;
}
