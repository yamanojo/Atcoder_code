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
	
	ll N;
	cin>>N;
    vector<ll> A(N);
    vector<ll> L(N),R(N);
    rep(i,N){
        cin>>A[i];
    }
    rep(i,N){
        if(i==0){
            R[N-1]=A[N-1];
        }else{
            R[N-1-i] = gcd(R[N-1-i+1],A[N-1-i]);
        }
    }
    rep(i,N){
        if(i==0){
            L[0]=A[0];
        }else{
            L[i] = gcd(L[i-1],A[i]);
        }
    }
    ll ans = 1;
    rep(i,N){
        if(i==0){
            ans=max(ans,R[1]);
        }else if(i==N-1){
            ans = max(ans,L[N-2]);
        }else{
            ans = max(ans,gcd(L[i-1],R[i+1]));
        }
    }
    cout<<ans<<"\n";
    // cout<<ans<<"\n";
	return 0;
}
