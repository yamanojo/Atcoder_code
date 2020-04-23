#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	
	ll K,N;
	cin>>K>>N;

    vector<ll> A(N);

    rep(i,N){
        cin>>A[i];
    }
    ll d_max = 0;
    rep(i,N-1){
        d_max = max(d_max,A[i+1]-A[i]);
    }

    d_max = max(d_max,K-A[N-1]+A[0]);

    cout<<(K-d_max)<<"\n";
	
	return 0;
}