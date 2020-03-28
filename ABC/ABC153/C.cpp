#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	
	ll N,K;
	cin >> N>>K;
    vector<ll> H(N);
    rep(i,N){
        cin>>H[i];
    }
    ll ans=0;
    if(N<=K){
        cout<<0<<"\n";
        return 0;
    }

    sort(H.begin(),H.end(),greater<ll>());
    // ans += K;

    for(int i=K;i<N;i++){
        ans += H[i];
    }
    cout<<ans<<"\n";


	return 0;
}
