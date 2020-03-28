#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	
	ll N,K;
	cin>>N>>K;
	vector<ll> P(N);
    rep(i,N){
        cin>>P[i];
    }
    ll ans_ll = 0;
    ll sum = 0;
    rep(i,K){
        sum+=P[i];
    }
    ans_ll = max(ans_ll,sum);
    rep(i,N-K){
        sum-=P[i];
        sum+=P[K+i];
        ans_ll = max(ans_ll,sum);
    }

    // double ans = double(ans_ll+K)/2.0;
    if((ans_ll+K)%2==0){
        cout<<(ans_ll+K)/2<<"\n";
    }else{
        cout<<(ans_ll+K)/2<<".5"<<"\n";
    }
    // cout<<ans<<"\n";
	
	return 0;
}