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

const ll MAXPRIME = 1005;
ll prime[MAX] = {};

void primeinit(){
    prime[0]=prime[1]=1;
    for(int i=2;i<MAXPRIME;i++){
        if(prime[i]!=0) continue;
        ll tmp_num = i;
        while(tmp_num<MAX){
            prime[tmp_num]=i;
            tmp_num+=i;
        }
    }
}



int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	COMinit();
    primeinit();
	ll N;
	cin >> N;
    vector<ll> A(N);
    rep(i,N){
        cin>>A[i];
    }
    ll ans = 0;

    rep(i,N){
        ans += inv[A[i]];
        ans %=MOD;
    }
    
    ll maxn = 10e3+1;
    map<ll,ll> gcm;
    map<ll,ll> gcm_mp;

    rep(i,N){
        gcm_mp.clear();
        ll m;
        while(A[i]!=1){
            gcm_mp[prime[A[i]]]++;
            A[i]/prime[A[i]];
        }
        for(auto it:gcm_mp){
            gcm[it.first]= max(gcm[it.first],it.second);
        }
    }
    ll lcm = 1;
    for(auto it:gcm){
        lcm *= modpow(it.first,it.second)%MOD;
        // cout<<it.first << " "<< it.second<<"\n";
        lcm %=MOD;
    }
    ans *=lcm;
    ans %=MOD;
    // cout<<lcm<<"\n";
    cout<<ans<<"\n";

	return 0;
}