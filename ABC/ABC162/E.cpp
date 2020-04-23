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
    ll tmp_n;
    rep(i,K){
        tmp_n = i+1;
        rep(j,(ll)sqrt(i+1)+1){
            if((i+1)==(j+1)){
                continue;
            }
            if((i+1)%(j+1)==0){
                tmp_n-=(j+1);
                if((i+1)/(j+1)!=j+1&& (j+1)!=1){
                    tmp_n-=(i+1)/(j+1);
                }
            }
        }
        if(tmp_n<0){
            tmp_n+=MOD;
        }
        // cout<<tmp_n<<"\n";
        ans += (tmp_n*(modpow(K/(i+1),N)))%MOD;
        ans %=MOD;
    }

    cout<<ans<<"\n";

	
	return 0;
}