#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	
	ll N;
	cin >> N;
    typedef pair<ll,ll> P;
    vector<P> X(N);
    rep(i,N){
        ll tmp_x,tmp_l;
        cin>>tmp_x>>tmp_l;
        X[i] = P{tmp_x-tmp_l,tmp_x+tmp_l};
    }
    sort(X.begin(),X.end(),[](P p1, P p2){return p1.first < p2.first;});

    ll ans = N;
    ll tmpx = X[0].second;
    for(int i=1;i<N;i++){
        if(X[i].first < tmpx){
            tmpx = min(X[i].second,tmpx);
            ans--;
        }else{
            tmpx = X[i].second;
        }
    }
    cout<<ans<<"\n";
    
	return 0;
}