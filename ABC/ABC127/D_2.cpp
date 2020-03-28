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
    sort(A.begin(),A.end());
    typedef pair<ll,ll> P;
    vector<P> BC(M);
    ll b,c;
    rep(i,M){
        cin>>b>>c;
        BC[i] = P{b,c};
    }
    sort(BC.begin(),BC.end(),[](P p1,P p2){return p1.second>p2.second;});
    vector<ll> new_num(N);
    ll ind = 0;
    rep(i,M){
        b = BC[i].first;
        c = BC[i].second;
        rep(j,b){
            new_num[ind]=c;
            ++ind;
            if(ind==N) break;
        }
        if(ind==N) break;
    }

    // rep(i,N){
    //     cout<<new_num[i]<<" ";
    // }

    if(A[0]>=new_num[0]){
        ll ans= 0;
        rep(i,N){
            ans+= A[i];
        }
        cout<<ans<<"\n";
        return 0;
    }
    ll min_i = 0,max_i = N;
    ll tmp_i = (min_i+max_i)/2;

    while(min_i!=max_i-1){
        tmp_i = (min_i+max_i)/2;

        if(A[tmp_i]<new_num[tmp_i]){
            min_i = tmp_i;
        }else{
            max_i = tmp_i;
        }
    }
    ll ans = 0;
    rep(i,min_i+1){
        ans += new_num[i];
    }
    rep(i,N-(min_i+1)){
        ans += A[N-1-i];
    }
    cout<<ans<<"\n";

	return 0;
}