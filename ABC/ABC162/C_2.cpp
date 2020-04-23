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
    
    ll ans = 0;
    ll tmp_gcd;
    rep(a,K){
        rep(b,K-a){
            rep(c,K-a-b){
                tmp_gcd = gcd(a+1,a+b+1);
                tmp_gcd = gcd(tmp_gcd,a+b+c+1);
                if(b==0){
                    if(c==0){
                        ans += tmp_gcd;
                    }else{
                        ans += tmp_gcd*3;
                    }
                }else{
                    if(c==0){
                        ans += tmp_gcd*3;
                    }else{
                        ans += tmp_gcd*6;
                    }
                }

            }
        }
    }

    cout<<ans<<"\n";


	return 0;
}