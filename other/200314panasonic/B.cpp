#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	
	ll H,W;
	cin>>H>>W;
    ll ans;
    if(H==1||W==1){
        ans = 1;
    }else{
        ans = (H*W+1)/2;
    }
    cout<<ans<<"\n";
	return 0;
}
