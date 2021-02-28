#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	ll A,B,C,K;
	cin>>A>>B>>C>>K;
	ll ans = 0;
	if(K>A){
		K-=A;
		ans += A;
	}else{
		ans += K;
		goto fin;
	}
	if(K>B){
		K -=B;
	}else{
		goto fin;
	}
	ans -= K;
	
	fin:
	cout<<ans<<"\n";
	return 0;
}
