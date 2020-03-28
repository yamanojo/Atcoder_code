#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	
	ll N,K,S;
	cin>>N>>K>>S;
    vector<ll> A(N);
    rep(i,K){
        A[i]= S;
    }
    for(int i=0;i<N-K;i++){
        if(S!=1){
            A[N-i-1] = S-1;
        }else{
            A[N-i-1] = 2;
        }
    }
    rep(i,N-1){
        cout<<A[i]<<" ";
    }
    cout<<A[N-1]<<"\n";

	return 0;
}