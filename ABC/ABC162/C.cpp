#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;

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



int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	
	ll K;
	cin>>K;
    ll g[K][K] = {};
    rep(i,K){
        rep(j,K-i){
            g[i][i+j] = gcd(i+1,i+j+1);
            g[i+j][i] = g[i][i+j];
        }
    }
    ll ans = 0;
    ll tmp_gcd;
    rep(a,K){
        rep(b,K-a){
            rep(c,K-b){
                tmp_gcd = g[a][b];
                tmp_gcd = g[tmp_gcd-1][c];
                if(a==b){
                    if(b==c){
                        ans += tmp_gcd;
                    }else{
                        ans += tmp_gcd*3;
                    }
                }else{
                    if(a!=c&&b!=c){
                        ans += tmp_gcd*6;
                    }else{
                        ans += tmp_gcd*3;
                    }
                }

            }
        }
    }

    cout<<ans<<"\n";


	return 0;
}