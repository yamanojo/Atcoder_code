#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	
	ll N;
	cin >> N;
    ll ans = 0;
    ll num[10][10]= {};
    ll x,y;
    rep(i,N){
        x = (i+1)%10;
        y = (i+1);
        while(y>=10){
            y=y/10;
        }
        num[x][y]++;
    }

    rep(i,9){
        for(int j=i;j<9;j++){
            if(i+1==j+1){
                ans += (ll)pow(num[i+1][j+1],2);
            }else{
                ans += num[i+1][j+1]*num[j+1][i+1]*2;
                
            }
        }
    }

    cout<<ans<<"\n";
	return 0;
}
