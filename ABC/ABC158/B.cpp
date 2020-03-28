#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	
	ll N,A,B;
	cin>>N>>A>>B;
    ll x;
    x = N/(A+B);
    ll ans = 0;
    ans = x*A + min(A,N-(x*(A+B)));
    cout<<ans<<"\n";

	return 0;
}