#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;
const ll MOD = 1000000007;
int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	
	ll N;
	cin>>N;
	ll a,b;
    vector<set<ll>> ab(N);
    rep(i,N){
        cin>>a>>b;
        --a;
        --b;
        ab[a].insert(b);
        ab[b].insert(a);   
    }

    vector<ll> s(N);

    deque<ll> q;
    while(!q.empty()){
        ll a = q.back();q.pop_front();
        if(ab[a].size()==1){
            s[a]=1;
        }

    }
    

	return 0;
}