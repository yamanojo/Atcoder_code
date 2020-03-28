#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	
	ll N;
	cin >> N;
    vector<ll> A(N);
    rep(i,N){
        cin >>A[i];
    }

    ll tmp_min = N+1;
    ll ans = 0;
    rep(i,N){
        if(tmp_min>=A[i]){
            ++ans;
            tmp_min = A[i];
        }
    }

    cout<<ans<<"\n";

	return 0;
}
