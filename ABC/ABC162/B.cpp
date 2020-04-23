#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	
	ll N;
	cin>>N;
    ll n,ans=0;
    rep(i,N){
        n = i+1;
        if(n%3!=0){
            if(n%5!=0){
                ans += n;
            }
        }
    }
    cout<<ans<<"\n";
	return 0;
}