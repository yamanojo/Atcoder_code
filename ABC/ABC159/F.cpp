#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	ll N,S;
    cin>>N>>S;
    vector<ll> A(N);

    rep(i,N){
        cin>>A[i];
    }

    vector<map<ll,ll>> mp_v(N);

    rep(i,N){
        if(i==0){
            mp_v[0][0]=1;
            if(A[i]<=S){
                ++mp_v[0][A[i]]=1;
            }
        }else{
            for(auto v :mp_v[i-1]){
                mp_v[i][v.first]+=v.second;
                if(v.first+A[i]<=S){
                    mp_v[i][v.first+A[i]]+=v.second;
                }
            }
        }
    }
	
	return 0;
}