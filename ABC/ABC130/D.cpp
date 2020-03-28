#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	ll N,K;
	cin >> N>>K;
    vector<int> A(N);
    rep(i,N){
        cin>>A[i];
    }

    ll ans = 0;
    int i_tmp=0;
    ll s=A[i_tmp];
    for(int i=0;i<N;i++){
        while(s<K){
            ++i_tmp;
            if(i_tmp==N) break;
            s+=A[i_tmp];
        }
        if(i_tmp==N) break;
        ans +=N-i_tmp;
        s-=A[i];
    }
    cout<<ans<<"\n";

	return 0;
}
