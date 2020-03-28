#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	
	string S;
	cin>>S;

    string ans = "";

    rep(i,S.length()){
        ans += "x";
    }
    cout<<ans<<"\n";
	
	return 0;
}