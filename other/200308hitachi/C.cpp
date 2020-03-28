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
    vector<set<ll>> v(N);
    vector<ll> group(N);
    vector<ll> flag(N);
    typedef pair<ll,ll> P;
    vector<P> ab(N-1);
	rep(i,N-1){
        cin>>a>>b;
        --a;
        --b;
        ab[i] = P{a,b};
        v[a].insert(b);
        v[b].insert(a);
    }
	return 0;
}