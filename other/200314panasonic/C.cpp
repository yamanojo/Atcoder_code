#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	
	ll a,b,c;
	cin>>a>>b>>c;
	ll l,r;
    l = 4*a*b;
    r = (c-a-b)*(c-a-b);
    string ans;
    if(l<r){
        ans = "Yes";
    }else{
        ans = "No";
    }
    if(c<=(a+b)) ans = "No";
    cout<<ans<<"\n";
	return 0;
}