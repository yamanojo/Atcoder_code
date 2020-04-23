#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	
	string N;
	cin>>N;
    string ans = "No";
    rep(i,N.size()){
        if(N[i]=='7'){
            ans = "Yes";
        }
    }
    cout<<ans<<"\n";

	return 0;
}