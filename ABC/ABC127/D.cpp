#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	
	ll N,M;
	cin>>N>>M;

    vector<ll> A(N);
    rep(i,N){
        cin>>A[i];
    }
    typedef pair<ll,ll> P;
    vector<P> BC(N);
    rep(i,M){
        ll b,c;
        cin>>b>>c;
        BC[i]=P{b,c};
    }
    sort(A.begin(),A.end());
    sort(BC.begin(),BC.end(),[](P p1,P p2){return p1.second>p2.second;});
    int ind = 0;
    ll num = 0;
    vector<ll> ind_v(M); 
    while(num<N||ind<M){
        num+=BC[ind].first;
        ind_v[ind]= num;
        ++ind;
    }
    if(num>=N){
        ind_v[ind-1] = N-1;
        --ind;
    }

    while(A[num]>BC[ind].second){
        --ind;
        if(ind<0) break;
        num = ind_v[ind];
    }
    ll ans = 0;
    if(i<0){
        rep(i,N){
            ans += A[i];
        }
    }else{
        // 適切なインデックスを探索
        rep(i,ind){
            
        }
    }

	return 0;
}