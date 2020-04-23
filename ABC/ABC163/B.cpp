#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
    
    ll N,M;
    cin>>N>>M;
    ll ans = N;
    ll a;
	rep(i,M){
        cin>>a;
        ans-=a;
    }

    if(ans<0){
        ans = -1;
    }
    cout<<ans<<"\n";

	return 0;
}