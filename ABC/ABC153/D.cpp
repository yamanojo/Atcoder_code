#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	
	ll H;
	cin >> H;

    ll ans = 0;
    ll atack_num = 1;
    while(H>0){
        ans += atack_num;
        H/=2;
        atack_num*=2;
    }

	cout<<ans<<"\n";
	
	return 0;
}
