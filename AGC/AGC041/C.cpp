#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	// おまじない
	cin.tie(0);
   	ios::sync_with_stdio(false);
    ll N;
    cin >> N;
    if(N%3!=0){
        cout << -1 << "\n";
        return 0;
    }
    ll k;
    k = N/3;
    string ans(N,'.');
    ans.replace(0,3,"aa.");
    cout << ans << "\n";
    for(ll i=1;i<N;i++){
        k = i/3;
        if(i%3 == 0){
            ans.replace((k-1)*3,3,"...");
            ans.replace(k*3,3,"aa.");
        }else{
            ans.replace(k*3,3,"..a");
        }
        cout << ans << "\n";
    }
    return 0;
}