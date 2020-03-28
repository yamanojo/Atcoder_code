#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;

const ll MAX = 1000000+2;
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

ll gcd(ll a, ll b) {
  if(a < b) return gcd(b, a);
  ll r;
  while ((r=a%b)) {
    a = b;
    b = r;
  }
  return b;
}

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	COMinit();
	ll N;
	cin >> N;
    vector<ll> A(N);
    rep(i,N){
        cin>>A[i];
    }
    ll gcm = 1;
    for(ll i=0;i<N;i++){
        ll tmp_gcd = gcd(gcm,A[i]);
        // cout<<tmp_gcd<<"\n";
        gcm = ((gcm*A[i]%MOD)*inv[tmp_gcd])%MOD;
        // cout<<gcm<<"\n";
    }

    ll ans =0;
    for(ll i=0;i<N;i++){
        ans = (ans+inv[A[i]])%MOD;
    }
    ans = (ans*gcm)%MOD;
    // cout<<gcm<<"\n";
    cout<<ans<<"\n";

	return 0;
}