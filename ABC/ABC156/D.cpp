#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;


const ll MAX = 200000+1;
const ll MOD = 1000000007;
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

    COMinit();
	ll n,a,b;
	cin>>n>>a>>b;
    ll c_a=1,c_b=1;
    rep(i,a){
        c_a*=(n-i);
        c_a%=MOD;
        c_a*=inv[i+1];
        c_a%=MOD;
    }
    rep(i,b){
        c_b*=(n-i);
        c_b%=MOD;
        c_b*=inv[i+1];
        c_b%=MOD;
    }
    ll ans = modpow(2,n)-1;
    if(ans<0) ans+=MOD;
    ans -= c_a;
    if(ans<0) ans+=MOD;
    ans -= c_b;
    if(ans<0) ans+=MOD;
    cout<<ans<<"\n";
	
	return 0;
}