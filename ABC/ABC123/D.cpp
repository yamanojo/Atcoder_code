#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	
	ll x,y,z,k;
	cin>>x>>y>>z>>k;
    vector<ll> A(x),B(y),C(z);
    rep(i,x){
        cin>>A[i];
    }
    rep(i,y){
        cin>>B[i];
    }
    rep(i,k){
        cin>>C[i];
    }
    vector<ll> AB(max(3000ll,x*y));
	rep(i,x){
        rep(j,y){
            AB[y*i+j] = A[i]+ B[j];
        }
    }
    sort(AB.begin(),AB.end(),greater<ll>());
    vector<ll> ABC(3000*y);
    rep(i,3000){
        rep(j,y){
            ABC[i*y+j] = AB[i]+C[j];
        }
    }
    sort(ABC.begin(),ABC.end(),greater<ll>());

    rep(i,k){
        cout<<ABC[i]<<"\n";
    }

	return 0;
}