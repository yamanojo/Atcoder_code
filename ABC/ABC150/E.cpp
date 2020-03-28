#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;
const ll MOD = 1000000007;

// aのn乗のMOD
ll modpow(ll a,ll n){
    ll res = 1;
    while(n>0){
        // &１つはビット積
        if(n&1) res = res * a%MOD;
        a = a*a%MOD;
        n>>=1;
    }
    return res;
}

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	
	ll N;
	cin >> N;
    vector<ll> C(N);
	rep(i,N){
		cin>>C[i];
	}
	sort(C.begin(),C.end(),greater<ll>());
	ll ans =0;
	ll s = modpow(2,2*N-2);
	
	rep(i,N){
		ans =(ans+ (((s*C[i])%MOD)*(i+2)))%MOD;
	}
	cout<<ans<<"\n";
	return 0;
}
