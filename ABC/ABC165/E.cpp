#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
    ll N,M;
	cin>>N>>M;
    vector<ll> ans1(M),ans2(M);
    if(N%2==1){
        rep(i,M){
            ans1[i] = i+1;
            ans2[i] = 2*M-i;
        }
    }else{
        ll A = M/2;
        ll B = (M+1)/2;
        rep(i,A){
            ans1[i] = i+1;
            ans2[i] = 1+A*2-i;
        }
        rep(i,B){
            ans1[A+i] = 1+A*2+1+i;
            ans2[A+i] = 1+A*2+1+B*2-1-i;
            }
        }

    rep(i,M){
        cout<<ans1[i]<<" "<<ans2[i]<<"\n";
    }
	
	return 0;
}
