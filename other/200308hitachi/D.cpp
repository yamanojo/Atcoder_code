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
    typedef pair<ll,ll> P;
    vector<P> ab(N);
    rep(i,N){
        cin>>a>>b;
        ab[i] = P{a,b};
    }
    sort(ab.begin(),ab.end(),[](P p1,P p2){return p1.second<p2.second;});
    
	return 0;
}