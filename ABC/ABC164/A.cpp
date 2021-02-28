#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);

    ll S,W;
    cin>>S>>W;

    string ans;
    if(W>=S){
        ans = "unsafe";
    }else{
        ans = "safe";
    }
	
    cout<<ans<<"\n";
	return 0;
}