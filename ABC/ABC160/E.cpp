#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	
	ll X,Y,A,B,C;
	cin>>X>>Y>>A>>B>>C;
    vector<ll> P(A),Q(B),R(C);

    rep(i,A){
        cin>>P[i];
    }

    rep(i,B){
        cin>>Q[i];
    }

    rep(i,C){
        cin>>R[i];
    }

    sort(P.begin(),P.end());
	sort(Q.begin(),Q.end());
	sort(R.begin(),R.end());
    auto pb = P.begin();
    pb += A-X;
    auto qb = Q.begin();
    qb += B-Y;
    ll min_r = 0,max_r = (ll)1e9+1,tmp_r;
    ll need_n,supply_n;
    while(min_r+1 !=max_r){
        tmp_r = (min_r+max_r)/2;
        need_n = 0;
        supply_n = 0;
        need_n+= lower_bound(pb,P.end(),tmp_r)-pb;
        need_n+= lower_bound(qb,Q.end(),tmp_r)-qb;
        supply_n = R.end()-lower_bound(R.begin(),R.end(),tmp_r);
        if(supply_n>=need_n){
            min_r = tmp_r;
        }else{
            max_r = tmp_r;
        }
    }
    cout<<min_r<<"\n";
    ll ans = 0;
    pb = lower_bound(pb,P.end(),min_r);
    qb = lower_bound(qb,Q.end(),min_r);
    for(auto itr = P.end()-1;X!=0||itr!=pb-1;--itr){
        ans += *itr;
        --X;
    }
    for(auto itr = Q.end()-1;Y!=0||itr!=qb-1;--itr){
        ans += *itr;
        --Y;
    }
    ll N = X+Y;
    cout<<N<<"\n";
    for(auto itr = R.end()-1;N!=0;--itr){
        ans += *itr;
        --N;
    }
    cout<<ans<<"\n";

	return 0;
}