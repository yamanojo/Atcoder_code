#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;

const ll MOD = 998244353;
ll ctoll(char a){
	ll ans;
	ans = (ll)a - '0';
	return ans;
}

ll to10(string s){
	ll l = s.length();
	ll ans = 0;
	ll n = 1;
	rep(i,l){
		ans += ctoll(s[l-1-i])*n;
		ans %=MOD;
		n=(n*2)%MOD;
	}
	return ans;
}

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	ll N;
	string X;
	cin>>N;
	cin>>X;
	ll L = N;
	while()

	// 必要な処理
	// 01の組み合わせ，0011の組み合わせなどの
	// k個の組だけで出来ているものは，k回で一致する．
	// 他は2N回で一致する．



	// bool n1=true,n2 = true;
	// ll x;
	// rep(i,N){
	// 	x = ctoll(X[i]);
	// 	if(x<i%2){
	// 		n1 = false;
	// 		break;
	// 	}else if(x>i%2){
	// 		break;
	// 	}
	// }
	// if(n1 == true){
	// 	rep(i,N){
	// 		x = ctoll(X[i]);
	// 		if(x<(i+1)%2){
	// 			n1 = false;
	// 			break;
	// 		}else if(x>(i+1)%2){
	// 			break;
	// 		}
	// 	}
	// }

	ll ans = 0;
	ans += (n1+n2)*2;
	x = to10(X);
	cout<<x<<"\n";
	cout<<n1<<" "<<n2<<"\n";
	cout<<(n1+n2)<<"\n";
	ans += (x-(n1+n2))*2*N;
	ans %=MOD;
	cout<<ans<<"\n";

	return 0;
}