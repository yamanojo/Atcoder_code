#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	
	ll X;
	cin>>X;
    ll ans = 0;

    ans +=1000*(X/500);
    X%=500;
    ans +=5*(X/5);
    cout<<ans<<"\n";
	return 0;
}