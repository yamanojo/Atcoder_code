#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	
	ll N;
	cin>>N;
    vector<ll> A(N);
    rep(i,N){
        cin>>A[i];     
    }
    
    ll ans = 0;
    rep(i,N/2){
        ans += A[i*2];
    }
    ll s = ans;
    if(N%2==0){
        ll ind = N-1;
        while(ind>=1){
            s+=A[ind];
            s-=A[ind-1];
            ind-=2;
            ans = max(ans,s);
        }
    }else{
        ll ind = N-2;
        while(ind>=1){
            s+=A[ind];
            s-=A[ind-1];
            ind-=2;
            ans = max(ans,s);
        }
        ind = N-1;
        while(ind>1){
            s+=A[ind];
            s-=A[ind-1];
            ind-=2;
            ans = max(ans,s);
        }
        if(N>=5){
            s+=A[0];
            s-=A[2];
            ans = max(ans,s);
            
        }
    }

    cout<<ans<<"\n";
	
	return 0;
}