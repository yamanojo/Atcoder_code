#include <bits/stdc++.h>
using namespace std;
typedef long ll;

int main(){
	// おまじない
	cin.tie(0);
   	ios::sync_with_stdio(false);
	
	ll N;
	// 出入力
	cin >> N;
    ll X[N];
	for(ll i=0;i<N;i++){
        cin>>X[i];
    }

    ll D[N-1];
    for(ll i=0;i<N-1;i++){
        D[i]=X[i+1]-X[i];
    }
    ll k = 1;
    ll MOD = 10e9+7;
    ll fac[N];
    fac[0]= 1;
    for(ll i = 1;i<N;i++){
        fac[i]= fac[i-1]*i%MOD;
    }
    ll ans = 0;
    ans += (X[N-1]-X[0])*fac[N-1]%MOD;

    for(ll i=0;i<N-1;i++){
        ans += (i-1)/2*fac[N-1]%MOD;
    }
    cout << ans << "\n";
    return 0;
    
}

/*
1 2 4 7
1 2 4 -> 6
2 1 4 -> 2 + (1+2) + 3
2が数えられる回数＝2より左にある個数-2より先に左のものから呼ばれた個数
例（3）
4と4より左にある数字を同じ数字として，
ans = x1*n1 + x2* n2 +x3*n3+...+xN-1*nN-1
n1 = 1
n2 = 1 + 1/n-1
n2 = 1 + 2/n-1
nx = 1 + x/n-1

後でかける-> (n-1)!




(1,2,3)
1*2 + 1*1 = 3
ans = 5
*/