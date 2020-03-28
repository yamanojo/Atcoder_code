#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;

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
	
	ll A,B;
	cin>>A>>B;
    ll gcd_ab = gcd(A,B);
    ll ans = 1;
    ll n=2;
    while((double)n<pow(gcd_ab,0.5)){
        if(gcd_ab%n==0){
            ++ans;
            gcd_ab/=n;
            while(gcd_ab%n==0){
                gcd_ab/=n;
            }
        }
        ++n;
    }
    if(gcd_ab!=1) ++ans;
    cout<<ans<<"\n";

	return 0;
}


