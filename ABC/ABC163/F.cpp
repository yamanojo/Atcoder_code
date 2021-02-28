#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;
typedef pair<ll,ll> P;

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);

	ll N;
	cin>>N;

	vector<ll> C;
	rep(i,N){
		cin>>C[i];
		--C[i];
	}
	
	vector<vector<ll>> S(N);
	rep(i,N-1){
		ll a,b;
		cin>>a>>b;
		--a;
		--b;
		S[a].insert(b);
		S[b].insert(a);
	}

	deque<ll> q;
	vector<ll> ans(N,N*N);
	ll ind = 0;
	while(S[ind].size()!=1){
		++ind;
	}
	q.push_back(ind);

	// 現時点での未確定な個数を残す。
	ll n[N][N] = {};
	rep(i,N){

	}
	++n[ind][C[ind]];

	
	while(!q.empty())

	return 0;
}