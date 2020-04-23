#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;
const ll MOD = 1000000007;

// 最大公約数を求める
ll gcd(ll a, ll b) {
  if(a < b) return gcd(b, a);
  ll r;
  while ((r=a%b)) {
    a = b;
    b = r;
  }
  return b;
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
	
	ll N,K;
	cin>>N>>K;
    ll ans = 0;
    ll s[K+1]={};
    ll n,k;
    rep(i,K){
        n = K-i;
        s[n] = modpow(K/n,N);
        k=2;
        while(n*k<=K){
            s[n] -= s[n*k];
            ++k;
        }
        while(s[n]<0){
            s[n]+=MOD;
        }
        ans += (n*s[n])%MOD;
        ans%=MOD;
    }

    cout<<ans<<"\n";

	
	return 0;
}