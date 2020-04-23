#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;
const ll MOD = 1000000007;

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	ll N,K;
    cin>>N>>K;

    ll ans = 0;
    for(ll i=K;i<=N+1;i++){
        ans +=1;
        ans +=i*(N+1-i)%MOD;
        ans%=MOD;
        // cout<<ans<<"\n";
    }

    cout<<ans<<"\n";


	return 0;
}