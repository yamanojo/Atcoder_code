#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;

const ll MOD = 998244353;

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	
	ll N;
	cin>>N;
    typedef pair<ll,ll> P;
    vector<P> xd;
    ll x,d;
	rep(i,N){
        cin>>x>>d;
        xd[i] = P{x,d};
    }

	return 0;
}