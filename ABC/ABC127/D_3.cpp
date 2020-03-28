#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	
	ll N,M;
	cin>>N>>M;
    vector<ll> A(N);

    rep(i,N){
        cin>>A[i];
    }
    sort(A.begin(),A.end());
    typedef pair<ll,ll> P;
    vector<P> BC(M);
    ll b,c;
    rep(i,M){
        cin>>b>>c;
        BC[i] = P{b,c};
    }
    sort(BC.begin(),BC.end(),[](P p1,P p2){return p1.second >p2.second;});
    vector<ll> new_num(N);
    ll ind = 0;
    rep(i,M){
        b = BC[i].first;
        c = BC[i].second;
        rep(j,b){
            new_num[ind]=c;
            ++ind;
            if(ind==N) break;
        }
        if(ind==N) break;
    }
    ll ans = 0;
    rep(i,N){
        ans += A[i];
    }
    ll max_ans = ans;

    rep(i,N){
        ans -= A[i];
        ans += new_num[i];
        max_ans = max(ans,max_ans);
    }
    cout<<max_ans<<"\n";

	return 0;
}