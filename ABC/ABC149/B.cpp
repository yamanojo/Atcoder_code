#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	// おまじない
	cin.tie(0);
   	ios::sync_with_stdio(false);
	
	ll A,B,K;
	// 出入力
	cin >> A >> B >> K;
    if (A < K){
        K = K-A;
        A = 0;
    }else{
        A = A-K;
        K = 0;
    }
    if (B < K){
        B = 0;
    }else{
        B = B-K;
    }
    string ans = to_string(A) + " " + to_string(B);
    cout << ans << "\n";

	// cout << ans << "\n";

    return 0;
}