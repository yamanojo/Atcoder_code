#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	ll K,A,B;

    cin>>K>>A>>B;
    string ans = "NG";
    rep(i,B-A+1){
        if((A+i)%K==0){
            ans = "OK";
        }
    }

    cout<<ans<<"\n";
	
	return 0;
}
