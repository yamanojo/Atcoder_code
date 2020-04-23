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

    typedef pair<ll,ll> P;
    vector<P> B(N/2),C(N/2+N%2);
    rep(i,N/2){
        B[i]= P(i,A[i]);
        C[i]= P(i+N/2,A[i+N/2]);
    }
    if(N%2==1){
        B[N/2]=P(N/2,A[N/2+1]);
    }

    sort(B.begin(),B.end(),[](P p1,P p2){return p1.second>p2.second;});
    sort(C.begin(),C.end(),[](P p1,P p2){return p1.second>p2.second;});

    vector<ll> B_s(B.size),C_s(C.size);
    ll b_s=0,c_s=0;
    rep(i,B.size){
        b_s += B[i].second*(N-1-i-B[i].first);
        if(i==0){
            B_s[i] = B[i].second;
        }else{
            B_s[i] = B[i].second + B[i-1].second;
        }
    }
    rep(i,C.size){
        c_s += C[i].second*(N-1-i-C[i].first);
        if(i==0){
            C_s[i] = C[i].second;
        }else{
            C_s[i] = C[i].second + C[i-1].second;
        }
    }
    if(*B_s.end()>*C_s.end()){
        rep(i,N){
            if()
        }
    }



	return 0;
}