#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);

    ll N;
    cin>>N;
    vector<ll> ans(N);
    ll a;
    rep(i,N-1){
        cin>>a;
        ++ans[a-1];
    }

    rep(i,N){
        cout<<ans[i]<<"\n";
    }

	return 0;
}