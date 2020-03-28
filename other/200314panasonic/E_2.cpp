#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;

int match(char a, char b){
    
    if(a==b || a=='?'||b=='?'){
        return true;
    }else{
        return false;
    }
}

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
    string a,b,c;
    cin>>a>>b>>c;
    ll A = a.length();
	ll B = b.length();
	ll C = c.length();
    bool ab[20000],ac[20000],bc[20000];
    rep(i,A){
        rep(j,B){
            if(!match(a[i],b[j])){
                ab[i-j+10000] = true;
            }
        }
    }
    rep(i,A){
        rep(j,C){
            if(!match(a[i],c[j])){
                ac[i-j+10000] = true;
            }
        }
    }
    rep(i,B){
        rep(j,C){
            if(!match(b[i],c[j])){
                bc[i-j+10000] = true;
            }
        }
    }
    ll M = 2000;
    ll ans = M*3;
    for (int i= -2*M;i<=2*M;i++){
        for(int j= -2*M;j<=2*M;j++){
            if(!ab[i+10000]&& !ac[j+10000]&&!bc[j-i+10000]){
                ll L = min(0,min(i,j));
                ll R = max(A,max(B+i,C+j));
                ans = min(ans,R-L);
            }
        }
    }

    cout<<ans<<"\n";

    return 0;
}