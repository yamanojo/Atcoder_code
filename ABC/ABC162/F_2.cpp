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
    ll dp_0[N][N/2+5];
    ll dp_1[N][N/2+5];

    dp_0[0][0] = 0;
    dp_1[0][1] = A[0];
    // ll t;

    ll max_i,min_i,ind;
    ll tmp_0,tmp_1;
    ll 
    rep(i,N-1){
        max_i = (i+2+1)/2;
        min_i = N/2-(N-(i+2)+1)/2;
        ind = min_i;
        while(ind<=max_i){
            tmp_0 = tmp_1 = (ll)-1e15;
            if(ind <= (i+1)/2){
                tmp_0 = dp_0[i][ind];
            }
            if(ind<= (i+1+1)/2){
                if(ind>=1){
                    tmp_1 = dp_1[i][ind];
                }
            }
            dp_0[i+1][ind] = max(tmp_0,tmp_1);
            dp_1[i+1][ind] = dp_0[i][ind-1]+ A[i+1];
            ++ind;
        }
    }
    
    ll ans = max(dp_0[N-1][N/2],dp_1[N-1][N/2]);
    // cout<<dp_0[N-1][N/2]<<"\n";
    // cout<<dp_1[N-1][N/2]<<"\n";
    cout<<ans<<"\n";
	
	return 0;
}