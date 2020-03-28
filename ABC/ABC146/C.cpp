#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	// おまじない
	cin.tie(0);
   	ios::sync_with_stdio(false);
	// ループ用
	int i,j,k;

	ll A,B,X;
	cin >> A >> B >> X;
    if(X < A + B){
        cout << 0 << "\n";
    }

    ll ans = 1;
    while(A*ans*10 + B * to_string(ans*10).length()<=X){
        ans *=10;
    }
    ll tmp;
    tmp = (X-(A*ans + B* to_string(ans).length()))/A;
    ans = min(ans+tmp,ans*10-1);

	cout << ans << "\n";
}