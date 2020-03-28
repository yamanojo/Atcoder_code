#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;
ll const MOD = 1e9+7;

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	
	ll  N;
	cin >> N;

    vector<ll> A(N);
    vector<ll> bit_num(60);
    rep(i,N){
        ll a;
        cin>>a;
        ll ind = 0;
        while(a!=0){
            if(a&1 != 0){
                ++bit_num[ind];
            }
            ++ind;
            a>>=1;
        }
    }
    ll ans =0;
    ll n = 1;
    rep(i,60){
        ans += (((N-bit_num[i])*bit_num[i])%MOD*n)%MOD;
        ans %= MOD;
        n*=2;
        n%=MOD;
    }
    // rep(i,N){
    //     cout<<bit_num[i];
    // }
    // cout<<"\n";
    cout<<ans<<"\n";


	return 0;
}