#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	string S,T;
	cin >>S>>T;

	string ans = "Yes";
	rep(i,S.length()){
		if(S[i]!=T[i]){
			ans = "No";
			break;
		}
	}
	cout<<ans<<"\n";
	return 0;
}
