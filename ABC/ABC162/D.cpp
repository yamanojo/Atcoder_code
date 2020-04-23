#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	ll a;
    cin>>a;
	string N;
	cin>>N;
    ll r=0,g=0,b=0;
    rep(i,N.size()){
        if(N[i]=='R'){
            ++r;
        }else if(N[i]=='G'){
            ++g;
        }else{
            ++b;
        }
    }
    ll ans = 0;

    ans += r*g*b;
    ll d;
    rep(i,N.size()/2){
        d = i+1;
        rep(j,N.size()){
            if(j+d*2>=N.size()){
                continue;
            }
            if(N[j]!=N[j+d] &&N[j]!=N[j+2*d]&&N[j+d]!=N[j+2*d]){
                --ans;
                // cout<<j<<d<<"\n";
            }
        }
    }
	cout<<ans<<"\n";
	return 0;
}