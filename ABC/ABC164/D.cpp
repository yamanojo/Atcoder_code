#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;

int ctoll(char a){
    return (ll)a-'0';
}

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	string S;
    cin>>S;

    ll n_sum[2020]={};
    ll n;
    ll a = 0;
    ll b=1;
    ++n_sum[0];
    rep(i,S.size()){
        n = ctoll(S[S.size()-1-i]);
        a += (n*b)%2019;
        a %=2019;
        ++n_sum[a];
        b*=10;
        b%=2019;
        // cout<<a<<"\n";
    }
    ll ans = 0;
    rep(i,2020){
        n = n_sum[i];
        ans +=n*(n-1)/2;
    }
    cout<<ans<<"\n";

	
	return 0;
}