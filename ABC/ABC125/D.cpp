#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	
	ll N;
	cin>>N;
    ll a;
    ll ans = 0;
    ll min_a = 1e9;
    ll m_n = 0;
    rep(i,N){
        cin>>a;
        if(a>=0){
            ans += a;
            min_a = min(min_a,a);
        }else{
            ++m_n;
            ans -= a;
            min_a = min(min_a,-a);
        }
    }
    if(m_n%2!=0){
        ans -= min_a*2;
    }
    // cout<<min_a<<"\n";
    cout<<ans<<"\n";
	return 0;
}
