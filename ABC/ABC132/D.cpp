#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;

const ll MAX = 510000;
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
	
	ll N,K;
	cin>>N>>K;

    COMinit();

    for(ll i=1;i<=K;i++){
        ll ans = 1;
        ll blue_n,red_n;
        if(i==1){
            blue_n = 1;
        }else{
            blue_n = COM(K-i+(i-1),i-1);
        }
        red_n = COM(N-K+i-(i-1),i);
        ans = blue_n*red_n%MOD;
        if(ans<0) ans +=MOD;
        // cout<<blue_n<<" "<<red_n<<"\n";
        cout<<ans<<"\n";
    }
	
	
	return 0;
}