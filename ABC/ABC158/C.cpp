#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	
	ll A,B;
	cin>>A>>B;
    ll min_x = 10*B;
    ll ans = -1;
    rep(i,10){
        if(((min_x+i)*8)/100 == A){
            ans = min_x+i;
            break;
        }
    }
    cout<<ans<<"\n";
	return 0;
}