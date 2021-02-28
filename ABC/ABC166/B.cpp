#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
    ll N,K,d,a;
    cin>>N>>K;
    vector<ll> A(N);
    rep(i,K){
        cin>>d;
        rep(j,d){
            cin>>a;
            --a;
            ++A[a];
        }
    }

    ll ans = 0;
    rep(i,N){
        if(A[i]==0){
            ++ans;
        }
    }

    cout<<ans<<"\n";



	
	return 0;
}