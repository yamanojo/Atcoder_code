#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


const ll MAX = 1000000;
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
	// おまじない
	cin.tie(0);
   	ios::sync_with_stdio(false);
	
	ll X,Y;
	// 出入力
	cin>>X>>Y;
    if((2*X-Y)<0||(2*Y-X)<0||(2*X+2*Y)%3!=0){
        cout<<0<<"\n";
        return 0;
    }
    ll a,b;
    a = (2*X-Y)/3;
    b = (2*Y-X)/3;
    COMinit();
    ll ans = COM(a+b,a);
    
    
    cout<<ans<<"\n";
    return 0;
}