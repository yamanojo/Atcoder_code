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
    ll m = 100;
    while(m<X){
        m = m*1.01;
        ++ans;
    }

    cout<<ans<<"\n";


	
	return 0;
}
