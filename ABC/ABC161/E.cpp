#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	
	ll N,K,C;
	cin>>N>>K>>C;

    string S;
    cin>>S;
    vector<ll> L(K),R(K);
    ll ind = 0;
    rep(i,K){
        while(S[ind]=='x'){
            ++ind;
        }
        L[i] = ind;
        ind += C+1;
    }
    ind = 0;
    rep(i,K){
        while(S[N-1-ind]=='x'){
            ++ind;
        }
        R[i] = N-1-ind;
        ind += C+1;
    }
    // rep(i,K){
    //     cout<<L[i]<<" "<<R[K-1-i]<<"\n";
    // }
    // rep(i,K){
    //     cout<<R[i]<<"\n";
    // }
    rep(i,K){

        if(L[i]==R[K-1-i]){
            cout<<L[i]+1<<"\n";
        }
    }
	return 0;
}