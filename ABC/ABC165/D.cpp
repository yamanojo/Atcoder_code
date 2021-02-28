#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	ll A,B,N;
    cin>>A>>B>>N;
    ll ans;
    if(N>=B){
        ans = (A*(B-1))/B;
    }else{
        ans = (A*N)/B;
    }

    cout<<ans<<"\n";
	
	return 0;
}
