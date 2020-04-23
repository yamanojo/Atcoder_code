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
    vector<P> B(N/2),C(N/2);
    ll ans = 0;

    if(N%2 ==0){
        rep(i,N/2){
            B[i]= P(i,A[i]);
            C[i]= P(i+N/2,A[i+N/2]);
        }
        sort(B.begin(),B.end(),[](P p1,P p2){return p1.second>p2.second;});
        sort(C.begin(),C.end(),[](P p1,P p2){return p1.second>p2.second;});

        rep(i,N/2){
            ans += B[i].second*(N-1-i-B[i].first);
            ans += C[i].second*(C[i].first-i);
        }
    }else{
        rep(i,N/2){
            B[i]= P(i,A[i]);
            C[i]= P(i+N/2+1,A[i+N/2]+1);
        }
        ll center_n = A[N/2+1];
        // 上と異なる、注意
        sort(B.begin(),B.end(),[](P p1,P p2){return p1.second>p2.second;});
        sort(C.begin(),C.end(),[](P p1,P p2){return p1.second>p2.second;});

        ans = 0;
        rep(i,N/2){
            ans += B[i].second*(N-1-i-B[i].first);
            ans += C[i].second*(C[i].first-i);
        }

        ll ind=0;
        ll b_n=0,c_n=0;
        while(center_n>B[ind].second&&ind<N/2){
            b_n+=center_n;
            b_n-=B[ind].second;
        }
        while(center_n>C[ind].second&&ind<N/2){
            c_n+=center_n;
            c_n-=C[ind].second;
        }

        ans += max(b_n,c_n);


        // auto itr = upper_bound(B.begin(),B.begin(),P(0,center_n),[](P p1, P p2){return p1.second>p2.second;});
        // ind = itr-B.begin();
        // rep(i,ind){
        //     b_n += center_n;
        //     b_n -= B[i].second;
        // }
        // itr = lower_bound(C.begin(),C.begin(),P(0,center_n),[](P p1, P p2){return p1.second>p2.second;});
        // c_n = ind-C.begin();
        // if()

    }
	
    cout<<ans<<"\n";
	return 0;
}