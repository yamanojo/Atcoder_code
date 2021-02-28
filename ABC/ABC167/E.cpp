#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;

const ll MAX = 510000;
const ll MOD = 998244353;
ll fac[MAX], finv[MAX], inv[MAX];
// テーブルを作る前処理
void COMinit() {
    fac[0] = fac[1] = 1;
    finv[0] = finv[1] = 1;
    inv[1] = 1;
    for (int i = 2; i < MAX; i++){
        fac[i] = fac[i - 1] * i % MOD;
        inv[i] = MOD - inv[MOD%i] * (MOD / i) % MOD;
        finv[i] = finv[i - 1] * inv[i] % MOD;
    }
}

ll COM(ll n, ll k){
    if (n < k) return 0;
    if (n < 0 || k < 0) return 0;
    return fac[n] * (finv[k] * finv[n - k] % MOD) % MOD;
}


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
	ll N,M,K;
	cin>>N>>M>>K;
	ll d = modpow(M-1,N-K-1);
	d *= M;
	d %=MOD;
	COMinit();
	
	ll ans = 0;
	ll k = K;
	rep(i,K+1){
		ans += (d * COM(N-1,k))%MOD;
		ans %=MOD;
		--k;
		d *=M-1;
		d %= MOD;
	}

	cout<<ans<<"\n";
	

	
	return 0;
}
