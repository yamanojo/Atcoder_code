#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	
	ll H,W;
	cin>>H>>W;
    typedef vector<ll> vec;
    vector<vec> A(H,vec(W));
    // vector<vec> B(H,vec(W));
	rep(i,H){
        rep(j,W){
            cin>>A[i][j];
        }
    }
    ll b;
    rep(i,H){
        rep(j,W){   
            cin>>b;
            A[i][j]-=b;
        }
    }
    
    vector<vec> dp_max(H,vec(W));
    vector<vec> dp_min(H,vec(W));
    rep(i,W){
        
    }
    rep(i,H){
        rep(j,W){
            
        }
    }

	return 0;
}
