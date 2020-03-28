#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;


const ll MAX = 1e6*2+5;
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


int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	COMinit();
	ll r1,c1,r2,c2;
	cin>>r1>>c1>>r2>>c2;
	ll a,b,c,d;
	a = COM(r2+1+c2+1,c2+1);
	b = COM(r1+c2+1,c2+1);
	c = COM(r2+1+c1,c1);
	d = COM(r1+c1,c1);
	ll ans = (a - b - c + d)%MOD;
	if(ans<0) ans += MOD;
	// cout<<a<<b<<c<<d<<"\n";

	cout<<ans<<"\n";

	return 0;
}
