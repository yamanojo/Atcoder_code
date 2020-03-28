#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	
	ll N,K;
	cin>>N>>K;
    vector<ll> V(N);
    rep(i,N){
        cin>>V[i];
    }
    ll ans = 0;
    ll v_sum= 0;
    multiset<ll> s;
    for(int i=0;i<=min(N,K);i++){
        if(i!=0){
            v_sum+=V[i-1];
            if(V[i-1]<0){
                s.insert(V[i-1]);
            } 
        }
        for(int j=1;j<=min(N,K)-i;j++){
            v_sum+=V[N-j];
            if(V[N-j]<0){
                s.insert(V[N-j]);
            }
            auto itr = s.begin();
            ll tmp_sum= 0;
            rep(k,K-(i+j)){
                if(itr == s.end()){
                    break;
                }
                tmp_sum+=*itr;
                ++itr;
            }
            ans = max(ans,v_sum-(tmp_sum));
        }
    }

    cout<<ans<<"\n";

	return 0;
}

