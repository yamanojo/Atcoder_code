#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	ll N,M,Q;
    cin>>N>>M>>Q;
    vector<ll> a(Q),b(Q),c(Q),d(Q);

    rep(i,Q){
        cin>>a[i]>>b[i]>>c[i]>>d[i];
        --a[i];
        --b[i];
    }

    vector<ll> A(N,1);
    ll ind = 0;
    ll m_ind = 0;
    ll tmp_ans;
    ll ans = 0;
    while(true){
        ll tmp_ans = 0;
        rep(i,Q){
            if(A[b[i]]-A[a[i]]==c[i]){
                tmp_ans += d[i];
            }
        }
        ans = max(ans,tmp_ans);
        // rep(i,N){
        //     cout<<A[i]<<" ";
        // }
        // cout<<tmp_ans;
        // cout<<"\n";

        if(A[N-1-ind] < M){
            ++A[N-1-ind];
        }else{
            while(A[N-1-ind]==M){
                ++ind;
                if(ind==N){
                    goto fin; 
                }
            }
            ++A[N-1-ind];
            rep(i,ind){
                A[N-1-i] = A[N-1-ind];
            }
            ind = 0;
        }
    }

    fin:

    cout<<ans<<"\n";	
	return 0;
}
