#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	
	ll N,M,K;
	cin>>N>>M>>K;
    
    
    vector<set<ll>> f_set(N);
    vector<set<ll>> b_set(N);
    rep(i,M){
        ll a,b;
        cin>>a>>b;
        f_set[a-1].insert(b-1);
        f_set[b-1].insert(a-1);
    }
    rep(i,K){
        ll a,b;
        cin>>a>>b;
        b_set[a-1].insert(b-1);
        b_set[b-1].insert(a-1);
    }
    deque<ll> dq;
    ll flag[N] = {};
    ll ans_all[N] = {};
    rep(i,N){
        if(flag[i]==0){
            ll ans = 0;
            dq.push_back(i);
            set<ll> group_set = {};
            group_set.insert(i);
            flag[i] = 1;
            while(!dq.empty()){
                ll id = dq.front();
                dq.pop_front();
                for(auto x:f_set[id]){
                    if(flag[x] == 0){
                        group_set.insert(x);
                        flag[x] = 1;
                        dq.push_back(x);
                    }
                }
            }
            for(auto x:group_set){
                ll not_f = 0;
                for(auto y:f_set[x]){
                    if(group_set.count(y)==1){
                        ++not_f;
                    }
                }
                for(auto y:b_set[x]){
                    if(group_set.count(y)==1){
                        ++not_f;
                    }
                }
                ans_all[x] = group_set.size()-1 - not_f;
            }
        }
    }
    rep(i,N-1){
        cout<<ans_all[i]<<" ";
    }
    cout<<ans_all[N-1]<<"\n";
    return 0;
}