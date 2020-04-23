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
    ll ans_old = 0;
    ll ans = 1;
    typedef pair<ll,ll> P;
    ll ind = 1;
    while (){
        vector<P> B(N/2-ind),C(N/2+N%2+ind);
        rep(i,N/2-ind){
            B[i]= P(i,A[i]);
        }
        rep(i,N/2+ind+N%2){
            C[i]= P(i+1+N/2-ind,A[i+1+N/2-ind]);
        }
        
        sort(B.begin(),B.end(),[](P p1,P p2){return p1.second>p2.second;});
        sort(C.begin(),C.end(),[](P p1,P p2){return p1.second>p2.second;});

        ll ans=0,b_s=0,c_s=0;
        rep(i,B.size){
            ans += B[i].second*(N-1-i-B[i].first);
            b_s+=B[i].second;
        }
        rep(i,C.size){
            ans += C[i].second*(N-1-i-C[i].first);
            c_s +=C[i].second;
        }

        ans = max(ans_old,ans);
        b_s>=0;
        c_s>=0;
    }
    



	return 0;
}