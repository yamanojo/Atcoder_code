#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;


int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	
	ll N;
	cin>>N;
    ll a,b;
    vector<deque<ll>> dq(N);
    rep(i,N-1){
        cin>>a>>b;
        --a;
        --b;
        dq[a].push_back(b);
        dq[b].push_back(a);
    }
    vector<ll> c_ar(N,-1);
    deque<ll> q,next;
    q.push_back(0);
    next.push_back(1);
    c_ar[0] = 0;
    ll n_1 = 0;
    ll c;
    while(!q.empty()){
        a = q.front();q.pop_front();
        if(c_ar[a]==0){
            c = 1;
        }else{
            c = 0;
        }
        for(auto v : dq[a]){
            if(c_ar[v]== -1){
                c_ar[v] =c;
                q.push_back(v);
                if(c==1) ++n_1;
            }
        }
    }
    // rep(i,N){
    //     cout<<c_ar[i]<<" ";
    // }
    // cout<<n_1;
    // cout<<"\n";

    //塗り終わったはず
    vector<ll> ans(N);
    deque<ll> p1,p2,p0;
    rep(i,N){
        if((i+1)%3==1){
            p1.push_back(i+1);
        }else if((i+1)%3==2){
            p2.push_back(i+1);
        }else{
            p0.push_back(i+1);
        }
    }

    ll tmp_ans;
    if(n_1 <= N/3){
        rep(i,N){
            if(c_ar[i] ==1){
                ans[i] = p0.front();
                p0.pop_front();
            }else{
                if(!p1.empty()){
                    ans[i] = p1.front();
                    p1.pop_front();
                }else if(!p2.empty()){
                    ans[i] = p2.front();
                    p2.pop_front();
                }else{
                    ans[i] = p0.front();
                    p0.pop_front();  
                }
            }
        }

    }else if(N-n_1<=N/3){
        rep(i,N){
            if(c_ar[i] !=1){
                ans[i] = p0.front();
                p0.pop_front();
            }else{
                if(!p1.empty()){
                    ans[i] = p1.front();
                    p1.pop_front();
                }else if(!p2.empty()){
                    ans[i] = p2.front();
                    p2.pop_front();
                }else{
                    ans[i] = p0.front();
                    p0.pop_front();  
                }
            }
        }
    }else{
        rep(i,N){
            if(c_ar[i] ==1){
                if(!p2.empty()){
                    ans[i] = p2.front();
                    p2.pop_front();
                }else{
                    ans[i] = p0.front();
                    p0.pop_front();  
                }
            }else{
                if(!p1.empty()){
                    ans[i] = p1.front();
                    p1.pop_front();
                }else{
                    ans[i] = p0.front();
                    p0.pop_front();  
                }
            }
        }
    }
    rep(i,N-1){
        cout<<ans[i]<<" ";
    }
    cout<<ans[N-1]<<"\n";
	return 0;
}