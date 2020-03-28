#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAX = 510000;
const int MOD = 1000000007;

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
    
	ll N,K;
	cin>>N>>K;


    vector<ll> A(N);
    for(ll i=0;i<N;i++){
        cin>>A[i];
    }
    sort(A.begin(),A.end());
    vector<ll> B(N-1);
    for(ll i=0;i<N-1;i++){
        B[i]= A[i+1]-A[i];
    }
    ll ans = 0;
    ll tmp_a,tmp_b,tmp_n;

    for(ll i=0;i<N-1;i++){
        if(i+1>=K){
            tmp_a = COM(i+1,K);
        }else{
            tmp_a = 0;
        }
        if(N-i-1>=K){
            tmp_b = COM(N-i-1,K);
        }else{
            tmp_b= 0;
        }
        ans = (ans +B[i]*((COM(N,K)-tmp_a-tmp_b)%MOD)%MOD)%MOD;
    }
    if(ans<0){
        ans +=MOD;
    }
    cout << ans << "\n";
	return 0;
}