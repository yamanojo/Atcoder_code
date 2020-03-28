#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	// おまじない
	cin.tie(0);
   	ios::sync_with_stdio(false);

	ll N,A,B;
    ll ans;
	cin >> N >> A >> B;
    if((B-A)%2 == 0){
        ans = (B-A)/2;
    }
    else{
        ans = (A-1 + B-1 + 1)/2;
        ans = min(ans,(N-B+N-A+1)/2);
    }
	cout << ans << "\n";
}